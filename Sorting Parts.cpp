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
    int t,n,x; cin>>t;
    while(t--){
        cin>>n; bl f=0;
    f(n){
        int y=0;
    if(i>1) y=x; cin>>x;
    if(y>x) f=1;
    }
   puts(f ? "YES" : "NO");
  }
}
