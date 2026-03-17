#include <bits/stdc++.h>
using namespace std;
struct dian{
	int x;
	int y;
};
struct dian b,ma;
int main()
{
	cin>>b.x>>b.y>>ma.x>>ma.y;
	long long dp[25][25]={0};
	bool control[25][25]={false};
	
	int dx[]={-2,-2,-1,-1,0,1,1,2,2};
	int dy[]={-1,1,-2,2,0,-2,2,1,-1};
	for(int i=0;i<9;i++){
		int nx=ma.x+dx[i];
		int ny=ma.y+dy[i];
		if(nx<20&&ny<20&&nx>=0&&ny>=0){
			control[nx][ny]=true;
		}
		
	}
	dp[0][0]=control[0][0]?0:1;
	for(int i=0;i<=b.x;i++){
		for(int j=0;j<=b.y;j++){
			if((i==0&&j==0)||control[i][j]){
				continue;
			}
			if(j>0)dp[i][j]+=dp[i][j-1];
			if(i>0)dp[i][j]+=dp[i-1][j];
			
		}
	}
	cout<<dp[b.x][b.y];
	return 0;
}