// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
#define st string
#define ve vector
#define ar array
#define pb push_back
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    ll t; cin>>t;
    while(t--){
        ll s=0,a[3]; cin>>a[0]>>a[1]>>a[2];
        ll p=__gcd(a[2],__gcd(a[0],a[1]));
    for(auto i:a)
        s+=(i/p)-1;
    puts(s<=3 ? "YES" : "NO");
  }
}
