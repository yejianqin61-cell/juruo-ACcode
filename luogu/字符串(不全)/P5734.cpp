#include <bits/stdc++.h>
using namespace std;


int main()
{
	int q;
	string str;
	cin>>q;
	cin>>str;
	string temp;
	int start=0,end=0;
	int pos;
	string inse;
	string target;
	for(int i=1;i<=q;i++){
		int num;
		cin>>num;
		switch (num){
			
			case 1:
					
					cin>>temp;
					str+=temp;
					cout<<str<<endl;
					
					break;
			case 2:
					
					cin>>start>>end;
					str=str.substr(start,end);
					cout<<str<<endl;
					break;	
			case 3:
					
					cin>>pos>>inse;
					str.insert(pos,inse);
					cout<<str<<endl;
					
					break;
			case 4:
					
					cin>>target;
					int poss=str.find(target);
					if(poss!=string::npos){
						cout<<poss<<endl;
					}
					else{
						cout<<"-1"<<endl;
					}
					break;
		}
	}
	return 0;
}