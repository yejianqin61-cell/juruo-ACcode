#include <bits/stdc++.h>
using namespace std;


int main()
{
	float n;
	cin>>n;
	float ans=0;
	if(n<=150){
		ans=n*0.4463;
	}
	else if(n>=151&&n<=400){
		ans=150*0.4463+0.4663*(n-150);
	}
	else if(n>=401){
		ans=150*0.4463+0.4663*250+(n-400)*0.5663;
	}
	cout<<fixed<<setprecision(1)<<ans<<endl;
	return 0;
}