#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
#define ar array
#define ve vector
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N=1002,inf=1e13;
using namespace std;
void NISHI(){
    int n,m; cin>>n>>m;
    vector<vector<pair<int,int>>> g(n);
    for(int i=0;i<m;++i){
        int a,b,w; cin>>a>>b>>w; --a;--b;
        g[a].push_back({b,w});
        g[b].push_back({a,w}); }
    vector<int> s(n);
    for(int &i : s) cin>>i;
    priority_queue<array<int,3>> q;
    q.push({0,0,-s[0]});
    vector<int> mp(N,-1);
    while (!q.empty()){
        int t=-q.top()[0], p=-q.top()[1], c=-q.top()[2];
        q.pop();
    if(p == n-1){ cout<<t<<'\n'; return; }
    if(c>s[p]) c=s[p];
    if(mp[p] != -1 && mp[p] <= c) continue;
    else mp[p] = c;

    for(auto &[y,w] : g[p]){ q.push({-(t+w*c),-y,-c}); }
    }
}
signed main(){
    io;
    int t; cin>>t;
  while(t--){ NISHI(); }
}
