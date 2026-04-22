#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int x,n;
	cin>>x>>n;
	int ans=0;
	
	for(int i=x;i<x+n;i++){
		
		if(i%7==6||i%7==0){
		
			continue;
		}
	
		ans+=250;
	
	
	}
	cout<<ans;
	return 0;
}