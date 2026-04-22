#include <bits/stdc++.h>
using namespace std;
int main()
{
	int year;
	int month;
	cin>>year>>month;
	bool run=false;
	if((year%4==0&&year%100!=0)||year%400==0){
		run=true;
	}
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		cout<<"31"<<endl;
		
	}
	else if(month==9||month==4||month==6||month==11){
		cout<<"30"<<endl;
	}
	else if(month==2&&run==true){
		cout<<"29"<<endl;
	}
	else if(month==2&&run==false){
		cout<<"28"<<endl;
	}
	return 0;
	

}