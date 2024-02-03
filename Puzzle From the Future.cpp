// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
#define st string
#define ve vector
#define ar array
#define pb push_back
#define f(n) for(int i=1;i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
	int t; cin>>t;
	while(t--){
		int n; st a,b="1"; cin>>n>>a;
    f(n){ ('1'+a[i] != b[i-1]+a[i-1]) ? b+="1" : b+="0"; }
        cout<<b<<"\n";
	}
}
