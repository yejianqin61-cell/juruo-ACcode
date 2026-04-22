#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int n,m;
	cin>>n>>m;
	vector<int> a;
	for(int i=0;i<n;i++){
		int temp=0;
		cin>>temp;
		a.push_back(temp);
	}
	vector<int> dp(10000,0);
	dp[0]=1;
	int j=0;
	for(int i=0;i<n;i++){
		for(int j=m;j>=a[i];j--){
			dp[j]+=dp[j-a[i]];
		}
	}
	cout<<dp[m]<<endl;
	return 0;
}