// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Os")
#define ll long long
#define st string
#define ve vector
#define ar array
#define pb push_back
#define bl bool
#define f(n) for(int i=1;i<=n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int a,b,n,t; cin>>t;
    while(t--){
        cin>>n;
    for(a=2,b=n-3;__gcd(a,b) != 1;a++,b--){ }
        cout<<a<<' '<<b<<' '<<1<<'\n';
    }
  return 0;
}
