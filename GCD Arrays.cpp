// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;++i)
using namespace std;
signed main(){
ios::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	while(t--){
		int a,b,k; cin>>a>>b>>k; int x=(b-a);
		puts((x/2+(a%2 || b%2)) <=  k||(a==b && a>1) ? "YES\n" : "NO\n");
	}
	return 0;
}
