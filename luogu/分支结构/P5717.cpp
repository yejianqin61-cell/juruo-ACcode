#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	vector<int> num;
	num.push_back(a);
	num.push_back(b);
	num.push_back(c);
	sort(num.begin(),num.end());
	int big=num[2];
	int small=num[0];
	int mid=num[1];
	if(a+b<=c||a+c<=b||b+c<=a){
		cout<<"Not triangle"<<endl;
		return 0;
	}
	int big2=big*big;
	int mid2=mid*mid;
	int small2=small*small;
	if(small2+mid2==big2){
		cout<<"Right triangle"<<endl;
	}
	else if(small2+mid2>big2){
		cout<<"Acute triangle"<<endl;
	}
	else if(small2+mid2<big2){
		cout<<"Obtuse triangle"<<endl;
	}
	if(small==mid||mid==big||small==big){
		cout<<"Isosceles triangle"<<endl;
	}
	if(small==mid&&mid==big){
		cout<<"Equilateral triangle"<<endl;
	}
	return 0;
}