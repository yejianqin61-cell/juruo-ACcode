#include <bits/stdc++.h>
using namespace std;
vector<int> cnt(26,0);
int main()
{
	string s1,s2,s3,s4;
	getline(cin,s1);
	getline(cin,s2);
	getline(cin,s3);
	getline(cin,s4);
	string s=s1+s2+s3+s4;
	

	
	for(int i=0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			int temp=s[i]-'A';
			cnt[temp]++;
		}
		else{
			continue;
		}
		
	}
	

	

	auto max_it=max_element(cnt.begin(),cnt.end());
	int big=*max_it;
	int pos=big;
	
	for(int j=big;j>0;j--){
		for(int i=0;i<26;i++){
				if(cnt[i]<j){
					if(i<25){
						cout<<"  ";
					continue;
					}
					else{
						cout<<" ";
						continue;
					}
					
				}
				else{
					if(i<25){
						cout<<"* ";
					}
					else{
						cout<<"*";
					}
				}
		}
		cout<<endl;
	}
	char put;
	for(int i=0;i<=25;i++){
		if(i<=24){
				put='A'+i;
			cout<<put<<" ";
		}
		else{
			cout<<"Z";
		}
	
	}
	
	return 0;
}
