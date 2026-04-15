#include <bits/stdc++.h>
#include <tuple>
using namespace std;
#define int long long
map<tuple<int,int,int>,int>mp;
int dfs(int n1,int n2,int n3){
	
	if(mp.count({n1,n2,n3})){
		return mp[{n1,n2,n3}];
	}
	if(n1<=0||n2<=0||n3<=0){
		mp[{n1,n2,n3}]=1;
		return 1;
	}
	else if(n1>20||n2>20||n3>20){
		mp[{n1,n2,n3}]=dfs(20,20,20);
		return 	mp[{n1,n2,n3}];
	}
	else if(n1<n2&&n2<n3){
		if(!mp.count({n1,n2,n3-1})){
			mp[{n1,n2,n3-1}]=dfs(n1,n2,n3-1);
		}
		if(!mp.count({n1,n2-1,n3-1})){
		mp[{n1,n2-1,n3-1}]=dfs(n1,n2-1,n3-1);
		}
		if(!mp.count({n1,n2-1,n3})){
			mp[{n1,n2-1,n3}]=dfs(n1,n2-1,n3);
		}
		mp[{n1,n2,n3}]=mp[{n1,n2,n3-1}]+mp[{n1,n2-1,n3-1}]-mp[{n1,n2-1,n3}];
		return 	mp[{n1,n2,n3}];
	}
	else{
	
		
		if(!mp.count({n1-1,n2,n3})){
			mp[{n1-1,n2,n3}]=dfs(n1-1,n2,n3);
		}
		if(!mp.count({n1-1,n2-1,n3})){
			mp[{n1-1,n2-1,n3}]=dfs(n1-1,n2-1,n3);
		}
		
		if(!mp.count({n1-1,n2,n3-1})){
			mp[{n1-1,n2,n3-1}]=dfs(n1-1,n2,n3-1);
		}
		
		if(!mp.count({n1-1,n2-1,n3-1})){
			mp[{n1-1,n2-1,n3-1}]=dfs(n1-1,n2-1,n3-1);
		}
		
		mp[{n1,n2,n3}]=mp[{n1-1,n2,n3}]+mp[{n1-1,n2-1,n3}]+mp[{n1-1,n2,n3-1}]-mp[{n1-1,n2-1,n3-1}];
		return mp[{n1,n2,n3}];
	}
	

}
signed main()
{
	
	vector<vector<int>>num;
	while(1){
		int temp1,temp2,temp3;
		cin>>temp1>>temp2>>temp3;
		if(temp1!=-1&&temp2!=-1&&temp3!=-1){
			vector<int>temp;
			temp.push_back(temp1);
			temp.push_back(temp2);
			temp.push_back(temp3);
			num.push_back(temp);
		}
		else{
			break;
		}
	}
	int lim=num.size()-1;
	for(int i=0;i<=lim;i++){
		int n1=num[i][0];
		int n2=num[i][1];
		int n3=num[i][2];
		int ans=dfs(n1,n2,n3);
		cout<<"w("<<num[i][0]<<", "<<num[i][1]<<", "<<num[i][2]<<") = "<<ans<<endl;
	}
	return 0;
}