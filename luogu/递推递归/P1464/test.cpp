#include<iostream>
#include<cstdio>
using namespace std;
typedef long long ll;  //手懒得打long long

ll a,b,c,note[30][30][30] = {0}; //记忆初始化，记得都要用ll哦

ll w(ll i,ll j,ll k){
	if(i<=0||j<=0||k<=0) return 1;  //第一种情况
	if(i>20||j>20||k>20) return w(20,20,20);//第二种
	if(i<j&&j<k){//第三种
		if(note[i][j][k-1] == 0){//是否有记忆
			note[i][j][k-1] = w(i,j,k-1);
		}
		if(note[i][j-1][k-1] == 0){
			note[i][j-1][k-1] = w(i,j-1,k-1);
		}
		if(note[i][j-1][k] == 0){
			note[i][j-1][k] = w(i,j-1,k);
		}
		note[i][j][k] = note[i][j][k-1] + note[i][j-1][k-1] - note[i][j-1][k]; //返回
	}
	else{//其他情况
		if(note[i-1][j][k] == 0){
			note[i-1][j][k] = w(i-1,j,k);
		}
		if(note[i-1][j-1][k] == 0){
			note[i-1][j-1][k] = w(i-1,j-1,k);
		}
		if(note[i-1][j][k-1] == 0){
			note[i-1][j][k-1] = w(i-1,j,k-1);
		}
		if(note[i-1][j-1][k-1] == 0){
			note[i-1][j-1][k-1] = w(i-1,j-1,k-1);
		}
		note[i][j][k] = note[i-1][j][k] + note[i-1][j-1][k] +  note[i-1][j][k-1] - note[i-1][j-1][k-1]; 
	}
	return note[i][j][k];//结束
}
int main(){
	while(1){
		cin>>a>>b>>c;
		if(a==-1&&b==-1&&c==-1) return 0;
		cout<<"w("<<a<<", "<<b<<", "<<c<<')'<<" = "<<w(a,b,c)<<endl;
	}
}