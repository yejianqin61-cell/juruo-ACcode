//if way=============================
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("put in 3 integer\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c){
		printf("%d",a);
	}
	else if(b>a&&b>c){
		printf("%d",b);
	}
	else if(c>b&&c>a){
		printf("%d",c);
	}
	return 0;
}
//=========bubble sort================
#include <stdio.h>
void bubble(int num[],int n)
{
		for(int i=0;i<n-1;i++){
			int swap=0;
			for(int j=0;j<n-1-i;j++){
				if(num[j]>num[j+1]){
					int temp;
					temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;
					swap=1;
				}
				
				if(swap==0)break;
			}
			
		}
	}
int main()
{
	int num[3];
	for(int i=0;i<2;i++){
		scanf("%d",&num[i]);
	}
	bubble(num,3);
	printf("%d",num[2]);
	
}
//==============insertSort==============
void insertSort(int num[],int n){
	for(int i=1;i<n;i++){
		int key=num[i];
		int j=i-1;
		while(j>=0&&num[j]>key){
			num[j+1]=num[j];
			j--;
		}
		num[j+1]=key;
	}
}
//==============find====================
#include <stdio.h>
int main()
{
	int num[3];
	for(int i=0;i<2;i++){
		scanf("%d",&num[i]);
	}
	int big=-1000000;
	for(int i=0;i<2;i++){
		if(num[i]>big){
			big=num[i];
		}
	}
	printf("%d",big);
	return 0;
}
//==============max func======================
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	int max=max(a,b,c);
	cout<<max;
	return 0;
}
//=================quick sort======================
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>num;
	cout<<"put in 3 integer"<<endl;
	for(int i=0;i<2;i++)
		{
			cin>>num[i];
		}
	sort(num.begin(),num.end());
	int it=num.size.();
	cout<<num[it-1];	
}
//=====================================