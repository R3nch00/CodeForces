// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Os")
#define int long long
#define st string
#define ve vector
#define ar array
#define ch char
#define pb push_back
#define bl bool
#define f(x) for(int i{};i<x;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int MOD= 1e9 + 7;
const int INF= LLONG_MAX;
using namespace std;
signed main(){
    io;
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int arr[n],ans=0;
        unordered_map<int,int> mp;
    f(n){
      int x; cin>>x;
      int g=k-(x%k);
    if(x%k!=0) ans=max(ans,g+(k*mp[g]+1));
     mp[g]++;
    }
   cout<<ans<<'\n';
  }
}
