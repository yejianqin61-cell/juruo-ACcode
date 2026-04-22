#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 颜色定义
typedef enum { RED, BLACK } Color;

// 红黑树节点
typedef struct RBNode {
    int data;
    Color color;
    struct RBNode *left, *right, *parent;
} RBNode;

// 红黑树结构
typedef struct {
    RBNode *root;
    RBNode *nil;  // 哨兵节点，所有叶子指向它
} RBTree;

// 创建新节点（颜色默认红色）
RBNode* createNode(int data, RBNode* nil) {
    RBNode* node = (RBNode*)malloc(sizeof(RBNode));
    node->data = data;
    node->color = RED;
    node->left = nil;
    node->right = nil;
    node->parent = nil;
    return node;
}

// 初始化红黑树
RBTree* createTree() {
    RBTree* tree = (RBTree*)malloc(sizeof(RBTree));
    
    // 创建哨兵节点（黑色）
    tree->nil = (RBNode*)malloc(sizeof(RBNode));
    tree->nil->color = BLACK;
    tree->nil->left = tree->nil->right = tree->nil->parent = NULL;
    
    tree->root = tree->nil;
    return tree;
}

// 左旋
void leftRotate(RBTree* tree, RBNode* x) {
    RBNode* y = x->right;
    x->right = y->left;
    if (y->left != tree->nil)
        y->left->parent = x;
    
    y->parent = x->parent;
    if (x->parent == tree->nil)
        tree->root = y;
    else if (x == x->parent->left)
        x->parent->left = y;
    else
        x->parent->right = y;
    
    y->left = x;
    x->parent = y;
}

// 右旋
void rightRotate(RBTree* tree, RBNode* y) {
    RBNode* x = y->left;
    y->left = x->right;
    if (x->right != tree->nil)
        x->right->parent = y;
    
    x->parent = y->parent;
    if (y->parent == tree->nil)
        tree->root = x;
    else if (y == y->parent->left)
        y->parent->left = x;
    else
        y->parent->right = x;
    
    x->right = y;
    y->parent = x;
}

// 插入修正（保持红黑树性质）
void insertFixup(RBTree* tree, RBNode* z) {
    while (z->parent->color == RED) {
        if (z->parent == z->parent->parent->left) {
            RBNode* y = z->parent->parent->right;  // 叔叔节点
            if (y->color == RED) {
                // 情况1：叔叔是红色 -> 重新染色
                z->parent->color = BLACK;
                y->color = BLACK;
                z->parent->parent->color = RED;
                z = z->parent->parent;
            } else {
                // 情况2：叔叔是黑色
                if (z == z->parent->right) {
                    // 情况2-1：z是右孩子 -> 左旋
                    z = z->parent;
                    leftRotate(tree, z);
                }
                // 情况2-2：z是左孩子 -> 右旋
                z->parent->color = BLACK;
                z->parent->parent->color = RED;
                rightRotate(tree, z->parent->parent);
            }
        } else {
            // 对称情况（父节点是祖父的右孩子）
            RBNode* y = z->parent->parent->left;
            if (y->color == RED) {
                z->parent->color = BLACK;
                y->color = BLACK;
                z->parent->parent->color = RED;
                z = z->parent->parent;
            } else {
                if (z == z->parent->left) {
                    z = z->parent;
                    rightRotate(tree, z);
                }
                z->parent->color = BLACK;
                z->parent->parent->color = RED;
                leftRotate(tree, z->parent->parent);
            }
        }
    }
    tree->root->color = BLACK;
}

// 插入节点
void insert(RBTree* tree, int data) {
    RBNode* z = createNode(data, tree->nil);
    
    RBNode* y = tree->nil;
    RBNode* x = tree->root;
    
    // 找到插入位置
    while (x != tree->nil) {
        y = x;
        if (z->data < x->data)
            x = x->left;
        else
            x = x->right;
    }
    
    z->parent = y;
    if (y == tree->nil)
        tree->root = z;
    else if (z->data < y->data)
        y->left = z;
    else
        y->right = z;
    
    // 修正红黑树性质
    insertFixup(tree, z);
}

// 中序遍历（验证有序）
void inorder(RBTree* tree, RBNode* node) {
    if (node != tree->nil) {
        inorder(tree, node->left);
        printf("%d ", node->data);
        inorder(tree, node->right);
    }
}

// 打印节点颜色（直观看到红黑）
void printTree(RBTree* tree, RBNode* node, int depth) {
    if (node == tree->nil) return;
    
    printTree(tree, node->right, depth + 1);
    
    for (int i = 0; i < depth; i++) printf("   ");
    printf("%d(%s)\n", node->data, node->color == RED ? "R" : "B");
    
    printTree(tree, node->left, depth + 1);
}

// ============= 测试 =============
int main() {
    RBTree* tree = createTree();
    
    int arr[] = {7, 3, 18, 10, 22, 8, 11, 26, 2, 6, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("插入序列: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        insert(tree, arr[i]);
    }
    printf("\n\n");
    
    printf("中序遍历结果（应有序）:\n");
    inorder(tree, tree->root);
    printf("\n\n");
    
    printf("树结构（右→左，R红 B黑）:\n");
    printTree(tree, tree->root, 0);
    
    return 0;
}