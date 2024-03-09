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
    int NISHI,n,m,a; cin>>NISHI;
    while(NISHI--){
        cin>>n>>m;
        set<int>arr;
     for(int i{};i<n+m;++i){ cin>>a; arr.insert(a); }
    cout<<n+m-arr.size()<<"\n";
  }
}
