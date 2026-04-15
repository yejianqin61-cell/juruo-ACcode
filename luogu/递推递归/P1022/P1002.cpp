#include <bits/stdc++.h>
using namespace std;
struct dian{
	int x;
	int y;
};
struct dian b,ma;
int ans=0;
void zou(int start_x,int start_y,int bx,int by){
	
	if(start_x>bx||start_y>by){
		return;
	}
	if(start_x>20||start_y>20){
		return;
	}
	if(start_x==ma.x-1&&(start_y==ma.y+2||start_y==ma.y-2)){
		return;
	}
	if(start_x==ma.x-2&&(start_y==ma.y+1||start_y==ma.y-1)){
		return;
	}
	if(start_x==ma.x+1&&(start_y==ma.y+2||start_y==ma.y-2)){
		return;
	}
	if(start_x==ma.x+2&&(start_y==ma.y+1||start_y==ma.y-1)){
		return;
	}
	if(start_x==ma.x&&start_y==ma.y){
		return;
	}
	
	if(start_x==bx&&start_y==by){
		ans++;
		return;
	}
	zou(start_x+1,start_y,bx,by);
	zou(start_x,start_y+1,bx,by);
	return;
}
int main()
{
	
	cin>>b.x>>b.y>>ma.x>>ma.y;
	
	zou(0,0,b.x,b.y);
	
	
	
	cout<<ans;
	return 0;
}