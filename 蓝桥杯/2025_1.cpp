#include <bits/stdc++.h>
using namespace std;
#define MAX 1e11
bool isprime(int num){
	bool ret=true;
	for(int i=2;i<num;i++){
		if(num%i==0){
			ret=false;
			return ret;
		}
		
	}
	return ret;
}
int main()
{
	int ans=-1;
	int count=0;
	for(int i=2;i<MAX;i++){
		if(isprime(i)){
			count++;
		}
		if(count==2025){
			ans=i;
			break;
		}
	}
	cout<<ans;
	return 0;
}