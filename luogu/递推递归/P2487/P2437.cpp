#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>>num(2000,{0});
vector<int> add(vector<int> &a,vector<int> &b){
	int carry=0;
	
	vector<int> ret;
	for(int i=0;i<a.size()||i<b.size();i++){
		int temp=0;
		temp+=carry;
		if(i<a.size()){
			temp+=a[i];
		}
		if(i<b.size()){
			temp+=b[i];
		}
		carry=temp/10;
		temp%=10;
		ret.push_back(temp);
		
		
	}
	if(carry){
		ret.push_back(carry);
	}
	return ret;
}
signed main()
{
	int m,n;
	cin>>m>>n;
	num[m][0]=1;
	num[m+1][0]=1;
	if(n==2||n==m+1){
		cout<<"1";
		return 0;
	}
	for(int i=m+2;i<=n;i++){
		num[i]=add(num[i-1],num[i-2]);
		
	}
	int index=num[n].size();
	for(int i=index-1;i>=0;i--){
		cout<<num[n][i];
	}
	return 0;
}