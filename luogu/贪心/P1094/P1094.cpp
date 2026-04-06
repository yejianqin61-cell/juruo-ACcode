#include <bits/stdc++.h>
using namespace std;
int w,n;

int main()
{
	cin.tie(0);
	
	cin>>w;
	cin>>n;
	vector<int> visi(n,0);
	vector<int> jiage(n);
	for(int i=0;i<n;i++)cin>>jiage[i];
	sort(jiage.begin(),jiage.end());
	int ans=0;
	for(int i=0;i<n;i++)
		{
			for(int j=n-1;j>=0;j--)
				{
					if(visi[j]==0){
						if(jiage[i]+jiage[j]<=w){
						visi[i]=1;
						visi[j]=1;
						ans++;
						break;
						}	
						else{
							visi[j]=1;
							ans++;
						}
					}
					
				}
		}
	cout<<ans;
	return 0;
}