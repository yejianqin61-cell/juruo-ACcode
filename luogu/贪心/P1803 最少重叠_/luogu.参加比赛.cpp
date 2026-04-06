#include <bits/stdc++.h>
using namespace std;
typedef struct BiSai{
	int kaishi;
	int jieshu;
	int t;
}Bisai;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<Bisai>bisai(n);
	int i=0;
	int maxday=0;
	for(i=0;i<n;i++)
		{
			cin>>bisai[i].kaishi>>bisai[i].jieshu;
			if(bisai[i].jieshu>maxday){
				maxday=bisai[i].jieshu;
			}
			bisai[i].t=bisai[i].jieshu-bisai[i].kaishi;
		}
	int count=0;
	sort(bisai.begin(),bisai.end(),[](const Bisai &a,const Bisai &b){
		
		if(a.jieshu!=b.jieshu){
			return a.jieshu<b.jieshu;
		}	
	});
	vector<int>visit(maxday+1,0);
	int last_end=-1;
	for(i=0;i<n;i++)
		{
			if(bisai[i].kaishi>=last_end){
				last_end=bisai[i].jieshu;
				count++;
			}
		}
	cout<<count;
	return 0;
}