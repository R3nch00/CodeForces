#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t;
	while(t--){
		string s; cin>>s; char c; cin>>c; bool ok=0;
		for(int i=0;i<s.length();i+=2){
			if(c==s[i]){
				ok=1;
			}
		}
		cout<<( ok ? "Yes" : "No" )<<endl;
	}
}
