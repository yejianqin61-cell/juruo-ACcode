#include <bits/stdc++.h>
using namespace std;
int count(int num,int* hc){
	int cnt=0;
	if(num>9){
						int temp1=0;
						
						while(num>9){
							temp1=num%10;
							num/=10;
							cnt+=hc[temp1];
						}
						cnt+=hc[num];
						
					}
					
					else {
						cnt=hc[num];
					}
				return cnt;
}
int main()
{
	int n;
	cin>>n;
	int hc[]={6,2,5,5,4,5,6,3,7,6};
	int cnt_i,cnt_j,cnt_p=0;
	int i,j=0;
	int ans=0;
	
	for(i=0;i<=1000;i++)
		{
			for(j=0;j<=1000;j++)
				{
					
					int cnti=count(i,hc);
					int cntj=count(j,hc);
					int cntp=count(i+j,hc);
				
					if(cnti+cntj+cntp==n-4){
						ans++;
					}
				}
		}
		
		cout<<ans;
}