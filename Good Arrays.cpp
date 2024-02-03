// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
#define ve vector
#define ar array
#define pb push_back
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
	int n,s=0; cin>>n;
	f(n){
		int q; cin>>q;
		if(q>1) s += q; }
	puts((s>=n && n>1) ? "YES" : "NO");
}
signed main(){
	io;
	int t; cin>>t;
	while(t--) NISHI();
    return 0;
}
