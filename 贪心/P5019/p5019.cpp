#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int prev,curr;
	cin>>prev;
	
	int ans=prev;
	for(int i=1;i<n;i++){
		cin>>curr;
		if(curr>prev){
			ans+=curr-prev;
		}
		prev=curr;
	}
	cout<<ans<<endl;
	return 0;
	
}
