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
const int n=2911;
int a[n],b[n];
signed main(){
    io;
    int f; cin>>f;
    while(f--){
        int n,m,k,s{}; cin>>n>>m>>k;
      f(n) cin>>a[i];
      for(int i{};i<m;i++) cin>>b[i];
      f(n){ for(int j{};j<m;j++){ if(a[i]+b[j]<=k){ s++; }}}
     cout<<s<<endl;
   }
 return 0;
}
