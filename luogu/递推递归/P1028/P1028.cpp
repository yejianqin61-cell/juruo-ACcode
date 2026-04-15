#include <bits/stdc++.h>
using namespace std;
vector<int> num;
int ans=1;
void dfs(){
	
	int index=num.size();
	int lim=num[index-1]/2;
	for(int i=1;i<=lim;i++){
		ans++;
		num.push_back(i);
		dfs();
		num.pop_back();
	}
}

int main()
{
	int n;
	cin>>n;
	num.push_back(n);
	
	dfs();
	cout<<ans;
	return 0;
}