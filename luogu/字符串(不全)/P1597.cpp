#include <bits/stdc++.h>
using namespace std;
#define int long long
bool alpha(char a){
	if(a>='a'&&a<='c'){
		return true;
	}
	else {
		return false;
	}
}
signed main()
{
	string s;
	cin>>s;
	int num[3]={0};
	bool find=false;
	int index=-1;
	for(int i=0;i<s.length();i++){
		if(find==false&&alpha(s[i]))	{
			find=true;
					if(s[i]=='a'){
						index=0;
					}
					else if(s[i]=='b'){
						index=1;
					}
					else if(s[i]=='c'){
						index=2;
					}
			continue;
		}
		int as=-1;
		if(find){
			if(isdigit(s[i])){
				num[index]=s[i]-'0';
				index=-1;
				find=false;
			}
			
			else if(alpha(s[i])){
				if(s[i]=='a'){
					as=0;
				}
				else if(s[i]=='b'){
					as=1;
				}
				else if(s[i]=='c'){
					as=2;
				}
				num[index]=num[as];
				index=-1;
				find=false;
			}
		}
	}
	
	for(int i=0;i<3;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}