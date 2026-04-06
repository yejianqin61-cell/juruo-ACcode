#include <bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0);
	string n;
	cin>>n;
	vector<int>shuzi;
	int k=0;
	cin>>k;
	for(int i=0;i<n.size();i++){
		shuzi.push_back(n[i]- '0');
	}
	
	while(k>0){
		bool dele=false;
		int len=shuzi.size();
		for(int i=0;i<len-1;i++){//
			if(shuzi[i]>shuzi[i+1]){
				shuzi.erase(shuzi.begin()+i);
				dele=true;
				break;
			}
		}
		if(!dele){
		shuzi.pop_back();
		}
		
		
		k--;
	}
	int begin=0;
	while(begin < (int)shuzi.size() - 1 && shuzi[begin] == 0){
    begin++;
}
	if(begin==shuzi.size()){
		cout<<0;
		return 0;
	}
	for(int i=begin;i<shuzi.size();i++){
		cout<<shuzi[i];
	}
	return 0;
	
}