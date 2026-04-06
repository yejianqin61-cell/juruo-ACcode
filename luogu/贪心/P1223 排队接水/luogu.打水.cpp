#include <bits/stdc++.h>
using namespace std;
typedef struct People{
	int t;
	int num;
	
}Peo;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<Peo>peo(n);
	int i=0;
	for(i=0;i<n;i++)
		{
			cin>>peo[i].t;
			peo[i].num=i+1;
		}
	sort(peo.begin(),peo.end(),[](const Peo &a,const Peo &b){
		if(a.t!=b.t){
				return a.t<b.t;
		}	
		else{
			return a.num<b.num;
		}
	});
	int ren_now=n; 
	double total=0;
	double avr_time=0;
	for(i=0;i<n;i++)
		{
			total+=peo[i].t*(ren_now-1);
			ren_now--;
			
		}
	avr_time=(double)total/n;
	for(i=0;i<n;i++)
		{
			cout<<peo[i].num<<" ";
		}
	cout<<endl;
	cout<<fixed<<setprecision(2)<<avr_time;
	return 0;
	
}
