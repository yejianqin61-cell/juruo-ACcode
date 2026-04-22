#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n==1){
		cout<<"Today, I ate 1 apple."<<endl;
		return 0;
	}
	else if(n==0){
		cout<<"Today, I ate 0 apple."<<endl;
		return 0;
	}
	else{
		cout<<"Today, I ate "<<n<<" apples."<<endl;
		return 0;
	}
}