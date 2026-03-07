#include <bits/stdc++.h>
using namespace std;
int n,m;
void swap(int* finger){
	int i=0;
	int index=-1;
	int target=-1;
	for(i=n-2;i>=0;i--){
		if(finger[i]<finger[i+1]){
			index=i;
			target=finger[i];
			break;//
		}
	}
	int huan=-1;
	int huanindex=-1;
	for(i=n-1;i>=0;i--){
		if(finger[i]>target){
			huanindex=i;
			huan=finger[i];
			break;
		}
	}
	int temp=-1;
	temp=finger[index];
	finger[index]=finger[huanindex];
	finger[huanindex]=temp;
	
	vector<int>tempo(5000,-1);
	int j=0;
	for(i=index+1;i<n;i++){
		
		tempo[j]=finger[i];
		j++;
	}
	j=0;//zhuyi
	for(i=n-1;i>=index+1;i--){
		
		finger[i]=tempo[j];
		j++;
	}
	
	return ;
}
int main()
{
	
	cin>>n>>m;
	int finger[n];
	for(int i=0;i<n;i++)cin>>finger[i];
	for(int i=1;i<=m;i++)
		{
			swap(finger);
			
		}
	for(int i=0;i<n;i++)
		{
			cout<<finger[i]<<" ";
		}
	return 0;
}