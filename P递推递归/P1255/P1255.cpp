#include <bits/stdc++.h>
using namespace std;
vector <int> add(vector<int>a,vector<int>b){
	int carry=0;
	int len=max(a.size(),b.size());
	vector<int>c;
	for(int i=0;i<len;i++){
		if(i<a.size()){
			carry+=a[i];
		}
		if(i<b.size()){
			carry+=b[i];
		}
		c.push_back(carry%10);
		carry/=10;
		
	}
	if(carry){
		c.push_back(carry);
	}
	return c;
}
int main()
{
	int n;
	cin>>n;
	vector<vector<int>>db(n+1);
	db[1]={1};
	db[0]={1};
	for(int i=2;i<=n;i++){
		db[i]=add(db[i-1],db[i-2]);
	}
	
	for(int i=db[n].size()-1;i>=0;i--){
		cout<<db[n][i];
	}
	
	
	return 0;
}