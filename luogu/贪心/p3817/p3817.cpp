#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,x;
	cin>>n>>x;
	long long a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	long long cnt=0;
	for(int i=0;i<n-1;i++)
		{
			long long he=a[i]+a[i+1];
			if(he>x){
			if(a[i+1]>(he-x)){
					cnt+=(he-x);
					a[i+1]-=(he-x);
			}	
			else{
				cnt+=(he-x);
			
				a[i]-=(he-x-a[i+1]);
					a[i+1]=0;
			}
			}
		}
		cout<<cnt;
}