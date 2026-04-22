#include <bits/stdc++.h>
using namespace std;
vector<int>num;
void dfs(int start,int n){
	
	if(start>n){
		for(int c=0;c<num.size();c++){
			cout<<num[c]<<" ";
		}
		cout<<endl;
		return;
	}
	dfs(start+1,n);
	num.push_back(start);
	dfs(start+1,n);
	num.pop_back();
}

int main(){
	int n;
	cin>>n;
	dfs(1,n);
}