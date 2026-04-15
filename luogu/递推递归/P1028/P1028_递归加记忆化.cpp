#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
unordered_map <int,int>mp;

int dfs(int last){

	
	if(mp.count(last)){
		return mp[last];
	}
	int count=1;
	
	for(int i=1;i<=last/2;i++){
		if(mp.count(i)!=0){
			count+=mp[i];
		
		else{
			int temp=dfs(i);
			mp[i]=temp;
			count+=mp[i];
		
		}
	}
	
	return count;
}

signed main()
{
	
	cin>>n;
	
	int answer=dfs(n);	
	cout<<answer;
	return 0;
}