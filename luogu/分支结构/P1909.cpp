#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int na,pa;
	int nb,pb;
	int nc,pc;
	cin>>na>>pa>>nb>>pb>>nc>>pc;
	int temp1=n/na;
	if(n%na!=0){
		temp1++;
	}
	int total1=pa*temp1;

	
	//
	
	
	int temp2=n/nb;
	if(n%nb!=0){
		temp2++;
	}
	int total2=pb*temp2;

	//
	int temp3=n/nc;
	if(n%nc!=0){
		temp3++;
	}
	int total3=pc*temp3;
	
	
	int ans=min({total1,total2,total3});
	cout<<ans;
	return 0;
}