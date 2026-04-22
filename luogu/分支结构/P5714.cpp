#include <bits/stdc++.h>
using namespace std;


int main()
{
	float m,h;
	cin>>m>>h;
	float h2=h*h;
	float bmi=m/h2;
	if(bmi<18.5){
		cout<<"Underweight"<<endl;
		
	}
	else if(bmi>=18.5&&bmi<24){
		cout<<"Normal"<<endl;
	}
	
	else{
		cout<<setprecision(6)<<bmi<<endl;
		cout<<"Overweight"<<endl;
		
	}
	return 0;
}
//fixed<<setprecision()
//<<setprecision()