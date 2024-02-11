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
    int t,n,a; cin>>t;
    while(t--){
        cin>>n; int x[n]; bool NISHI=true;
    f(n) cin>>x[i];
    for(int i=1;i<n-1;i++)
    if(x[i] > x[i-1] && x[i] > x[i+1]){
        NISHI=false;
        cout<<"YES\n"<<i<<" "<<i+1<<" "<<i+2<<'\n';
        break;}
    if(NISHI) cout<<"NO\n";
  }
 return 0;
}
