#include <bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0);
	int n=0;
	cin>>n;
	int cnt=0;
	int mass[10]={1};
	if(n<10||n>30){
		cout<<"0"<<endl;
		return 0;
	}
	vector<vector<int>> solutions;
	int a,b,c,d,e,f,g,h,i,j;
		for(a=1;a<=3;a++){
		for(b=1;b<=3;b++){
		for(c=1;c<=3;c++){
		for(d=1;d<=3;d++){
		for(e=1;e<=3;e++){
		for(f=1;f<=3;f++){
		for(g=1;g<=3;g++){
		for(h=1;h<=3;h++){
		for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
		if(a+b+c+d+e+f+g+h+i+j==n){
			cnt++;
			solutions.push_back({a,b,c,d,e,f,g,h,i,j});
		}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	}
	cout<<cnt<<endl;
	for(auto& sol: solutions){
		for(int k=0;k<10;k++){
			cout<<sol[k];
			if(k<9)cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}