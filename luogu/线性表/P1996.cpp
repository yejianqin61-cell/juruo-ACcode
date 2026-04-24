#include <bits/stdc++.h>
using namespace std;


int n;
int m;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
	cin>>n>>m;
vector<int> out(n+1, 0);
	int people=n;
	int pointer=1;
	int leiji=0;

	while(people>0){
		if(pointer==n+1){
			pointer=1;
			continue;
		}
		
		if(out[pointer]==1){
			pointer++;
			continue;
		}
		else if(out[pointer]==0){
			leiji++;
		}
		
		if(leiji==m){
			cout<<pointer<<" ";
			leiji=0;
			people--;
			out[pointer]=1;
			continue;
		}
		pointer++;
	}
	return 0;
}