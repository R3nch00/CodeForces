// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Os")
#define ll long long
#define st string
#define ve vector
#define ar array
#define ch char
#define pb push_back
#define bl bool
#define f(x) for(int i{};i<x;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int t; cin>>t;
    while(t--){
        int x,a,c=0,f=0; cin>>x>>a; int y[x];
    f(x) cin>>y[i];
    f(x){
      if(y[i]==y[0]) f++;
      if(f>=a){
        if(y[i]==y[x-1] && y[i]!=y[0]) c++;
      }
    }
   puts(((c>=a && f>=a) || (c==0 && f>=a)) ? "YES" : "NO");
  }
}
