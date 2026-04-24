#include <bits/stdc++.h>
using namespace std;
int gentleman,lady;
string s;
int main(){
	cin>>s;
	for(int i=0;i<=s.length();i++){ 
		if(s[i]=='b'||s[i+1]=='o'||s[i+2]=='y') gentleman++;
		if(s[i]=='g'||s[i+1]=='i'||s[i+2]=='r'||s[i+3]=='l') lady++;
	}
	cout<<gentleman<<endl<<lady;
	return 0;
}

