// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
#define ve vector
#define ar array
#define pb push_back
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int t; cin>>t;
    while(t--){
        int x,k; cin>>x>>k;
        map<int,int> m; int y,ans=0;
    while(x--){ cin>>y; m[y]++; }
    for(auto i:m){ ans+=min(i.second,k); }
  cout<<ans<<"\n";
    }
 return 0;
}
