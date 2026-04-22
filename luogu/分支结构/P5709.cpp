#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,t,s;
	cin>>m>>t>>s;
	
	if(t==0){
		cout<<"0"<<endl;
		return 0;
	}
	int temp=s/t;
	if(s%t!=0){
		temp++;
		
	}
	
	
	int rest=m-temp;
	if(rest<=0){
		rest=0;
	}
	cout<<rest<<endl;
	return 0;
}