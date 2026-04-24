#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	string s;
	cin>>s;
	vector<int>num;
	int d=0;
	for(int i=0;i<s.length();i++){
		
		if(isdigit(s[i])){
			d=(s[i]-'0')+d*10;
			
		}
		if(s[i]=='.'){
			num.push_back(d);
			d=0;
		}
		if(s[i]=='+'){
			int temp1=num.back();
			num.pop_back();
			int temp2=num.back();
			num.pop_back();
			int sum=temp1+temp2;
			num.push_back(sum);
			
		}
		else if(s[i]=='-'){
			int temp1=num.back();
			num.pop_back();
			int temp2=num.back();
			num.pop_back();
			int dif=temp2-temp1;
			num.push_back(dif);
		}
		else if(s[i]=='*'){
			int temp1=num.back();
			num.pop_back();
			int temp2=num.back();
			num.pop_back();
			int mul=temp2*temp1;
			num.push_back(mul);
		}
		else if(s[i]=='/'){
			int temp1=num.back();
			num.pop_back();
			int temp2=num.back();
			num.pop_back();
			int divi=temp2/temp1;
			num.push_back(divi);
		}
	}
	cout<<num[0];
	return 0;
}