#include <bits/stdc++.h>
using namespace std;
int a[100];
int n,r;
void dfs(int k){
	if(k>r){
		for(int i=1;i<=r;i++){
			cout<<setw(3)<<a[i];
		}
		cout<<endl;
		return;
	}
	int j;
	for(j=a[k-1]+1;j<=n;j++){
		a[k]=j;
		dfs(k+1);
	}
	
}
int main()
{
	
	cin>>n>>r;
	dfs(1);
	return 0;
	
}