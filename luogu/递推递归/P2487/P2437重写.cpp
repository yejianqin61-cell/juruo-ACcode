#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> way(2000,{0});
vector<int> add(vector<int> &a,vector<int> &b){
	int carry=0;
	vector<int> ret;
	for(int i=0;i<a.size()||i<b.size();i++){
		int temp=0;
		if(i<a.size()){
			temp+=a[i];
		}
		if(i<b.size()){
			temp+=b[i];
		}
		temp+=carry;
	
		ret.push_back(temp%10);
		carry=temp/10;
		temp=0;
	}
	if(carry!=0){
		ret.push_back(carry);
	}
	return ret;
}
signed main()
{
	int m,n;
	
	cin>>m>>n;
	if(n==2||n==m+1){
		cout<<"1"<<endl;
		return 0;
	}
	way[m+1][0]=1;
	way[m][0]=1;
	for(int i=m+2;i<=n;i++){
		way[i]=add(way[i-1],way[i-2]);
		
	}
	int lim=way[n].size();
	for(int i=lim-1;i>=0;i--){
		cout<<way[n][i];
	}
	return 0;
}