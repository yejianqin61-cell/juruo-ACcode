#include <bits/stdc++.h>
using namespace std;
#define int long long
int note[30][30][30]={0};
int w(int a,int b,int c){
	if(a<=0||b<=0||c<=0){
		return 1;
	}
	if(a>20||b>20||c>20){
		return w(20,20,20);
	}
	if(a<b&&b<c){
		if(note[a][b][c-1]==0){
			note[a][b][c-1]=w(a,b,c-1);
		}
		if(note[a][b-1][c-1]==0){
			note[a][b-1][c-1]=w(a,b-1,c-1);
		}
		if(note[a][b-1][c]==0){
			note[a][b-1][c]=w(a,b-1,c);
		}
		note[a][b][c]=note[a][b][c-1]+note[a][b-1][c-1]-note[a][b-1][c];
		return note[a][b][c];
	}
	else{
		if(note[a-1][b][c]==0){
			note[a-1][b][c]=w(a-1,b,c);
		}
		if(note[a-1][b-1][c]==0){
			note[a-1][b-1][c]=w(a-1,b-1,c);
		}
		if(note[a-1][b][c-1]==0){
			note[a-1][b][c-1]=w(a-1,b,c-1);
		}
		if(note[a-1][b-1][c-1]==0){
			note[a-1][b-1][c-1]=w(a-1,b-1,c-1);
		}
		note[a][b][c]=note[a-1][b][c]+note[a-1][b-1][c]+note[a-1][b][c-1]-note[a-1][b-1][c-1];
		return note[a][b][c];
	}
}

signed main()
{
	int a,b,c;	
	vector<int>daan;
		vector<int>aa;
		vector<int>bb;
		vector<int>cc;	
	while(1){
		
		cin>>a>>b>>c;
		
		
		if(a!=-1&&b!=-1&&c!=-1){
			
		int ans=w(a,b,c);
		daan.push_back(ans);
		
			aa.push_back(a);
			bb.push_back(b);
			cc.push_back(c);
	}
		else{
			break;
		}
	}
	for(int i=0;i<daan.size();i++){
		
		cout<<"w("<<aa[i]<<", "<<bb[i]<<", "<<cc[i]<<")"<<" = "<<daan[i]<<endl;
	}
	return 0;
}                               
                                                                               