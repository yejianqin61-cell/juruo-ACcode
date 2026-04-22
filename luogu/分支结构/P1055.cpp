#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	string re;
	cin>>re;
	int index=1;
	int sum=0;
	int shibie;
	if(isdigit(re[re.length()-1])){
		shibie=re[re.length()-1]-'0';
	}
	else{
		shibie=10;
	}
	
	for(int i=0;i<re.length();i++){
		if(isdigit(re[i])){
			sum+=index*(re[i]-'0');
			
			index++;
			if(index==10){
				break;
			}
		}
	}
	int ans=sum%11;

	
	
	if(ans==shibie){
		cout<<"Right"<<endl;
		
	}
	else{
		for(int i=0;i<re.length()-1;i++)cout<<re[i];
		if(ans==10){
			cout<<"X"<<endl;
		}
		
		else{
			cout<<ans<<endl;
		}
		
	}
	return 0;
}