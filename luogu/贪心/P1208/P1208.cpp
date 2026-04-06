#include <bits/stdc++.h>
using namespace std;
struct nai{
	int danjia;
	int shuliang;
};
bool compare(const nai& a,const nai&b){
	return a.danjia<b.danjia;
}
int main()
{
	cin.tie(0);
	int n,m,i;
	cin>>n>>m;
	
	vector<struct nai> niunai(m);
	for(i=0;i<m;i++){
		cin>>niunai[i].danjia>>niunai[i].shuliang;
	}
	sort(niunai.begin(),niunai.end(),compare);
	int fee=0;
	int total=0;
	for(i=0;i<m;i++){
	
		total+=niunai[i].shuliang;
		if(total==n){
			fee+=niunai[i].danjia*niunai[i].shuliang;
			break;
		}
		else if(total>n){
			int temp=total-n;
			fee+=niunai[i].danjia*niunai[i].shuliang-niunai[i].danjia*temp;
			break;
		}
		fee+=niunai[i].danjia*niunai[i].shuliang;
	}
	cout<<fee;
	return 0;
}