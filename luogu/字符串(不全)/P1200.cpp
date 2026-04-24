#include <bits/stdc++.h>
using namespace std;


int main(){
	string star;
	string dui;
	cin>>star>>dui;
	int mul1=1;
	for(int i=0;i<star.length();i++)
	{
		int temp=1;
		if(star[i]=='A'){
			mul1*=1;
		}
		else{
			temp=star[i]-'A'+1;
			mul1*=temp;
		}
	}
	int mo1=mul1%47;
	int mul2=1;
	for(int i=0;i<dui.length();i++)
	{
		int temp=1;
		if(dui[i]=='A'){
			mul2*=1;
		}
		else{
			temp=dui[i]-'A'+1;
			mul2*=temp;
		}
	}
	int mo2=mul2%47;
	
	if(mo1==mo2){
		cout<<"GO"<<endl;
	}
	else{
		cout<<"STAY"<<endl;
	}
	
	return 0;
	
	
}