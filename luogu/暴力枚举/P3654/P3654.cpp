#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,j=0;
	int ans=0;
		int cnt=0;
	int hang,lie,k;
	cin>>hang>>lie>>k;
	
	string row;
	vector<string>matrix;
	
	for(i=0;i<hang;i++)
		{
			cin>>row;
			matrix.push_back(row);
		}
		if(k==1)
		{
			for(i=0;i<hang;i++)
				{
					for(j=0;j<lie;j++){
						if(matrix[i][j]=='.')
						cnt++;
					}
				}
				cout<<cnt;
				return 0;
		}
	for(i=0;i<hang;i++)
		{
			cnt=0;
			for(j=0;j<lie;j++)
				{
					if(matrix[i][j]!='#')
						{
							cnt++;
							if(cnt>=k)
							{
						
									
									ans++;
					
								}
						}
					else{
						cnt=0;
					}
					
				}
		}
		cnt=0;
	for(j=0;j<lie;j++)
		{
			cnt=0;
			for(i=0;i<hang;i++)
				{
					if(matrix[i][j]!='#')
						{
							cnt++;
								if(cnt>=k){
								
								ans++;
								}
						}
					else{
						cnt=0;
					}
				
		}
		
}
cout<<ans;
return 0;
}







