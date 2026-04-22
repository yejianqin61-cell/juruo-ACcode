#include <bits/stdc++.h>
using namespace std;

string s;
int pos = 0;  // 当前处理到的位置

// 递归解压，返回解压后的字符串
string dfs() {
    string res = "";
    
    while (pos < s.length()) {
        char c = s[pos];
        
        if (c == '[') {
            // 遇到左括号，开始解压压缩块
            pos++;  // 跳过 '['
            
            // 读取数字 D
            int d = 0;
            while (isdigit(s[pos])) {
                d = d * 10 + (s[pos] - '0');
                pos++;
            }
            
            // 递归解压括号内的内容
            string inner = dfs();  // 这里会处理到匹配的 ']'
            
            // 重复 D 次并加入结果
            for (int i = 0; i < d; i++) {
                res += inner;
            }
        }
        else if (c == ']') {
            // 遇到右括号，返回当前层的结果
            pos++;
            return res;
        }
        else {
            // 普通字符，直接加入结果
            res += c;
            pos++;
        }
    }
    
    return res;
}

int main() {
    cin >> s;
    cout << dfs() << endl;
    return 0;
}









/*#include <bits/stdc++.h>
#include <string>
#include <cstdlib>
using namespace std;
#define int long long
int index=0;
string re;
string ans;
bool num(char i){
	if(i>'0'&&i<='9'){
		return true;
	}
	else{
		return false;
	}
}
void write(){
	
}
void dfs(int start,int end){
	int lim=end-start+1;
	bool
	for(int i=start+1;i<end;i++){
		if(re[i]=='['){
			int j=i+1;
			
		}
	}
}
signed main()
{
	
	cin>>re;
	int lim=re.length();
	
	string str;
	for(int i=0;i<lim;i++){
		bool find=false;
		if(re[i]=='['){
			int j=i+1;
			find=true;
			int zuo=1;
			int you=0;
			while(you!=zuo){
				if(re[j]=='['){
					zuo++;
				}
				else if(re[j]==']'){
					you++;
				}
				j++;
			}
			
		}
		dfs(i,j);
		
		else{
			bool num=number(re[i]);
			int numindex;
			if(num){
				int times=stoi(re[i]);
				numindex=i;
				continue;
			}
			else{
				if(find){
					for(int index=numindex+1;index<i;index++){
						str.push_back(re[index]);
					}
					for(int i=1;i<num;i++){
						ans+=str;
					}
				}
			}
			
		}
		
	}
}