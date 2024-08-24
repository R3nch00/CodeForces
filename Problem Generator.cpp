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
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define lb lower_bound
#define ub upper_bound
#define f(n) for(int i{};i<n;++i)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define HHH(){ int t; cin>>t; while(t--) solve();};
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    st s; cin>>s;
    map<int,int> mpp;
    for(auto it:s){
        mpp[it]++;
    }
    int ans(0);
    st c="ABCDEFG";
    for(auto it:c){ if(mpp[it]<m) ans+=(m-mpp[it]); }
  cout<<ans<<'\n';
 }
signed main(){
    io;
    HHH();
    return 0;
}
