#include <bits/stdc++.h>
using namespace std;
#define int long long

int zhanzhuan(int a,int b){
	int temp=a/b;
	int r=a-temp*b;
	while(1){
		temp=a/b;
		r=a-temp*b;
		if(r==0){
			return b;
		}
		else{
			a=b;
			b=r;
		}
		
	}
	
}

signed main()
{
	int a,b,c;
	cin>>a>>b>>c;
	vector<int> num;
	num.push_back(a);
	num.push_back(b);
	num.push_back(c);
	sort(num.begin(),num.end());
	int big=num[2];
	int sma=num[0];
	int mid=num[1];
	int ans=0;
	int dui=sma;
	int xie=big;
	int gongyue=zhanzhuan(dui,xie);
	dui/=gongyue;
	xie/=gongyue;
	cout<<dui<<"/"<<xie<<endl;
	return 0;
}