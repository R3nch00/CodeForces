// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
ll func(ll p){
	string s=to_string(p);
	ll xd=0;
	for(int i=0;i<s.size();i++)xd+=s[i]-'0';
	return xd;
  }
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	while(t--){
		ll x; cin>>x;
		while(__gcd(x,func(x))==1)x++;
		cout<<x<<"\n";
	}
  return 0;
}
