#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string x="";
		for(int i=1;i<=64;++i){
			char s; cin>>s;
			if(s!='.')x+=s;
		}
		cout<<x<<endl;
	}
}
