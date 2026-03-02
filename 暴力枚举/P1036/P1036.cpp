#include <bits/stdc++.h>
using namespace std;
vector<int>re;
vector<int>sel;
int n,k;
int cnt=0;

bool isprime(int sum) {
    if (sum < 2) return false;
    for (int i = 2; i * i <= sum; i++) {  // 优化：只需判断到平方根
        if (sum % i == 0) {
            return false;  // 不是素数
        }
    }
    return true;  // 是素数
}


void dfs(int start, int depth){
	if(depth==k){
		int sum = accumulate(sel.begin(), sel.end(), 0);
		if(isprime(sum)){
			cnt++;
		}
		return ;
	}
	for(int i=start;i<n;i++){
		sel.push_back(re[i]);
		dfs(i+1,depth+1);
		sel.pop_back();
		
	}
}

int main()
{
	
	cin>>n>>k;//choose k from n
	re.resize(n);//
	for(int i=0;i<n;i++)cin>>re[i];
	 sort(re.begin(), re.end());//
	 sel.clear();//
	dfs(0,0);
	cout<<cnt;
	return 0;
}