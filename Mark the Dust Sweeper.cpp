// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
#define st string
#define ve vector
#define ar array
#define pb push_back
#define f(x) for(int i{};i<x;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int t; cin>>t;
    while(t--){
        ll s=0,ans=0; int x,a; cin>>x;
    f(x){
      cin>>a;
      if(i!=x-1 && ans && a==0) ans++;
      if(i!=x-1) ans+=a;
     }
    cout<<ans<<"\n";
  }
 return 0;
}
