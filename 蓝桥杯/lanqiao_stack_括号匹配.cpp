#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	stack<char>st;
	for(char c:s){
		if(c=='('||c=='['||c=='{'){
			st.push(c);
		}
		else{
			if(st.empty()){
				cout<<"invalid"<<endl;
				return 0;
			}
			char t=st.top();
			st.pop();
			if(c==')'&&t!='('||c==']'&&t!='['||c=='}'&&t!='{'){
				cout<<"invalid"<<endl;
				return 0;
			}
		}
	}
	if(st.empty()){
		cout<<"valid"<<endl;
		return 0;
	}
	else{
		cout<<"invalid"<<endl;
		return 0;
	}
}