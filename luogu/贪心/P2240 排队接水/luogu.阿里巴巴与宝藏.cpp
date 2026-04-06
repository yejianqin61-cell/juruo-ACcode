#include <bits/stdc++.h>
using namespace std;
typedef	struct Jinbi{
		int m;
		int v;
		double danjia;
		
	}jinbi;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,t;
	cin>>n>>t;

	vector<Jinbi>jinbis(n);
	int i=0;
	for(i=0;i<n;i++)
		{
			cin>>jinbis[i].m>>jinbis[i].v;
			jinbis[i].danjia=(double)jinbis[i].v/jinbis[i].m;
		}
	sort(jinbis.begin(),jinbis.end(),[](const jinbi& a,const jinbi& b){
		return a.danjia>b.danjia;
	});
	double sum=0;
	double value=0;
	double temp=0;
	double cha=0;
	for(i=0;i<n;i++)
		{
			if(sum+jinbis[i].m<t)
				{
					sum+=jinbis[i].m;
					value+=jinbis[i].v;
					
				}
			
			else if(sum==t)
				{
					break;
				}
			else{
				cha=t-sum;
				value+=jinbis[i].danjia*cha;
				sum=t;
				break;
			}
		}
	cout<<fixed<<setprecision(2)<<value;
	return 0;
}
