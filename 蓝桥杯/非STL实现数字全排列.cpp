#include <bits/stdc++.h>
using namespace std;
int num[10];
bool used[10];
int n;
void dfs(int u){
	if(u==n){
		for(int i=0;i<n;i++){
			cout<<num[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!used[i]){
			num[u]=i;
			used[i]=true;
			dfs(u+1);
			used[i]=false;
			num[u]=0;
		}
	}
}

int main()
{
	cin>>n;
	dfs(0);
}