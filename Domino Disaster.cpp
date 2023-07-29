#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n; string s; cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i=0;i<s.length();i++){
			if(s[i]=='U')
				cout<<'D';
			else if(s[i]=='D')
				cout<<'U';
			else
				cout<<s[i];
		}
		cout<<'\n';
	}
	return 0;
}
