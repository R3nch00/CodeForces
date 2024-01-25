// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
string s,t;
ll NISHI(){
	cin>>s>>t;
	return (t=="a") ? 1 : (t.find("a") != string::npos) ? -1 : (1ll<<s.length());
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int T; cin>>T;
	while(T--){ cout<<NISHI()<<'\n'; }
  return 0;
}
