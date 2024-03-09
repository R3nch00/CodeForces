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
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int t; cin>>t;
    while(t--){
        int n,p=0,q=0; cin>>n; ve<int >a(n);
      for(auto &v:a){cin>>v; p+=v;}
      for(auto v:a){if((q+=v-p/n)<0) break;}
     puts(q<0 ? "NO":"YES");
  }
}
