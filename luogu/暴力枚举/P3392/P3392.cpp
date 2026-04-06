#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int cnt=0;
	int mi=n*m;
	int w,b,k,p;
	string row;
	vector<string>matrix;
	for(k=0;k<n;k++)
		{
			cin>>row;		
			matrix.push_back(row);
				
		}
	for(w=1;w<=n-2;w++)
		{
			for(b=w+1;b<=n-1;b++)
				{
					cnt=0;
					for(k=0;k<w;k++){
						for(p=0;p<m;p++)
							{
								if(matrix[k][p]!='W')cnt++;
							}
						
					}
					for(k=w;k<b;k++){
						for(p=0;p<m;p++)
							{
								if(matrix[k][p]!='B')cnt++;
							}
						
					}

					for(k=b;k<n;k++){
						for(p=0;p<m;p++)
							{
								if(matrix[k][p]!='R')cnt++;
							}
						
					}
						mi=min(cnt,mi);
				}
				
		}
	
	cout<<mi;
	
	return 0;
}