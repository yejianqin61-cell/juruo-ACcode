#include <bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0);
	long long n=0;
	cin>>n;
	vector<long long> high(n+1);
	for(long long i=1;i<=n;i++)cin>>high[i];
	high[0]=0;
	long long ti=0;
	sort(high.begin(),high.end());
    long long i=0,j=n;
	
	while(i<=j){
		
		ti+=(high[i]-high[j])*(high[i]-high[j]);
	
		i++;
			if(i>j)break;
		ti+=(high[i]-high[j])*(high[i]-high[j]);
		if(i>j)break;
		
		j--;
		
	}
	cout<<ti;
	return 0;
}