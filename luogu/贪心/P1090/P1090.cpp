#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(0);
	
	int n=0;
	cin>>n;
	multiset<long long>guozi;
	for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		guozi.insert(x);	
	}
	long long ans=0;
	while(guozi.size()>1){
		auto it =guozi.begin();
		long long x=*it;
		guozi.erase(it);
		
		it =guozi.begin();
		long long y=*it;
		guozi.erase(it);
		
		int sum=x+y;
		guozi.insert(sum);
		ans+=sum;
		
	}
	cout<<ans;
	return 0;
}