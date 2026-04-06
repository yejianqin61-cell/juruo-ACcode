#include <bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	int i,j,k,v,m,n,q,w,e;
	int cnt=0;
	vector<vector<int>>solutions;
	int visit[10]={0};
	int num1,num2,num3;
	for(i=1;i<=9;i++){
		
		for(j=1;j<=9;j++){
			if(j==i)continue;
			for(k=1;k<=9;k++){
				if(k==i||k==j)continue;
				num1=i*100+j*10+k;
				visit[i]=1,visit[j]=1,visit[k]=1;
				//
				for(v=1;v<=9;v++){
					if(visit[v]==1)continue;
					for(m=1;m<=9;m++){
						if(visit[m]==1||m==v)continue;
						for(n=1;n<=9;n++){
							if(visit[n]==1||n==m||n==v)continue;
							num2=v*100+m*10+n;
							visit[v]=1,visit[m]=1,visit[n]=1;
							//
								for(q=1;q<=9;q++){
									if(visit[q]==1)continue;
									for(w=1;w<=9;w++){
										if(visit[w]==1||w==q)continue;
										for(e=1;e<=9;e++){
											if(visit[e]==1||e==q||e==w)continue;
											num3=q*100+w*10+e;
											 if(num1 * b == num2 * a && 
                                           num1 * c == num3 * a && 
                                           num2 * c == num3 * b) {
                                            cnt++;
                                            cout << num1 << " " << num2 << " " << num3 << endl;
                                        }
										}
									}
								}
								visit[v] = visit[m] = visit[n] = 0;
						}
						 
					}
					
				}
				visit[i] = visit[j] = visit[k] = 0;
			}
		}
	}
	if(cnt==0)cout<<"No!!!";
	return 0;
}