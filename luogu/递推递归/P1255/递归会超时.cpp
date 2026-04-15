#include <bits/stdc++.h>
using namespace std;
long long ans=0;
void pa(long long start,long long n){
	if(start==n){
		ans++;
		return;
	}
	else if(start>n){
		return;
	}
	pa(start+1,n);
	pa(start+2,n);
}
int main()
{
	long long n;
	cin>>n;
	pa(0,n);
	cout<<ans;
}