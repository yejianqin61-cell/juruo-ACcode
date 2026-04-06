#include <bits/stdc++.h>
using namespace std;
struct A{
	int x;
	int y;
	int can=0;
};

bool compare(const A&a,const A &b){
	return a.x<b.x;
}
bool com(const A&a,const A &b){
	return a.y<b.y;
}
int main()
{
	int n,s,a,b;
	cin>>n>>s;

	cin>>a>>b;
	vector<struct A> arr(n);
	
	for(int i=0;i<n;i++){
		cin>>arr[i].x>>arr[i].y;
	}
	for(int i=0;i<n;i++){
		if(arr[i].x<=a+b){
			arr[i].can=1;
		}
	}
	
	
	
		int used_figor=0;
		int cnt1=0;
			sort(arr.begin(),arr.end(),com);
			for(int i=0;i<n;i++){
				if(arr[i].can==0){
					continue;
				}
				used_figor+=arr[i].y;
				if(used_figor>s){
					break;
				}
				cnt1++;
			}
			cout<<cnt1;
		
	

	
	return 0;
}