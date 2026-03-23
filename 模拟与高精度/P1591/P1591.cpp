#include <bits/stdc++.h>
using namespace std;

struct Zu {
    int n;
    char a;
};

// 高精度乘法：将一个大数（字符串形式，高位在前）乘以一个整数
string multiply(string num, int x) {
    vector<int> digits;
    // 将字符串转为数组，低位在前
    for (int i = num.size() - 1; i >= 0; i--) {
        digits.push_back(num[i] - '0');
    }
    
    int carry = 0;
    for (int i = 0; i < digits.size(); i++) {
        int product = digits[i] * x + carry;
        digits[i] = product % 10;
        carry = product / 10;
    }
    
    // 处理剩余的进位
    while (carry > 0) {
        digits.push_back(carry % 10);
        carry /= 10;
    }
    
    // 转回字符串（高位在前）
    string result;
    for (int i = digits.size() - 1; i >= 0; i--) {
        result.push_back(digits[i] + '0');
    }
    return result;
}

string factorial(int n) {
    if (n == 0 || n == 1) return "1";
    
    string result = "1";
    for (int i = 2; i <= n; i++) {
        result = multiply(result, i);
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    vector<Zu> zu(t);
    
    for (int i = 0; i < t; i++) {
        cin >> zu[i].n >> zu[i].a;
    }
    
    for (int i = 0; i < t; i++) {
        string fact_str = factorial(zu[i].n);
        int count = 0;
        for (char ch : fact_str) {
            if (ch == zu[i].a) {
                count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}