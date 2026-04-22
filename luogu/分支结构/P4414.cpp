#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	string s;
	cin>>s;
	vector<int> num;
	num.push_back(n1);
	num.push_back(n2);
	num.push_back(n3);
	sort(num.begin(),num.end());
	int big=num[2];
	int mid=num[1];
	int sma=num[0];
	
	if(s=="ABC"){
		cout<<sma<<" "<<mid<<" "<<big<<endl;
	}
	else if(s=="ACB"){
		cout<<sma<<" "<<big<<" "<<mid<<" "<<endl;
	}
	else if(s=="BCA"){
		cout<<mid<<" "<<big<<" "<<sma<<" "<<endl;
		
	}
	else if(s=="BAC"){
		cout<<mid<<" "<<sma<<" "<<big<<" "<<endl;
		
	}
	else if(s=="CAB"){
		cout<<big<<" "<<sma<<" "<<mid<<" "<<endl;
	}
	else if(s=="CBA"){
		cout<<big<<" "<<mid<<" "<<sma<<" "<<endl;
	}
	return 0;
}