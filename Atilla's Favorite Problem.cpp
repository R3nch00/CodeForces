#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){ int n; cin>>n; string s; cin>>s;
		sort(s.begin(),s.end());
		cout<<s[s.size()-1]-'a'+1<<endl;
	}
}
