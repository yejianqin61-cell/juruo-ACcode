#include <bits/stdc++.h>
using namespace std;

int dfs(int instack,int nextnum,int n){
	if(nextnum>n){
		return 1;
	}
	int count=0;
	
	if(nextnum<=n){
		count+=dfs(instack+1,nextnum+1,n);
	}
	if(instack>0){
		count+=dfs(instack-1,nextnum,n);
	}
	return count;
}

int  main()
{
	int n=0;
	cin>>n;
	int ans=dfs(0,1,n);
	cout<<ans<<endl;
	return 0;
}