// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
#define st string
#define ve vector
#define ar array
#define pb push_back
#define f(k) for(int i=1;i<=k;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int t,k,n; cin>>t;
    while(t--){
        cin>>k>>n;
    f(k) cout<<min(1+i*(i-1) / 2,n-k+i)<<" \n";
  }
}