#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int local=0;
	int luogu=11;
	local=n*5;
	luogu+=3*n;
	if(local<luogu){
		cout<<"Local"<<endl;
		
	}
	else{
		cout<<"Luogu"<<endl;
		
	}
	return 0;
}