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
    int n; cin>>n; ve<int> pos(n),c(n);
    f(n){ int x; cin>>x; x--; pos[x]=i; }
    f(n){ int x; cin>>x; x--; c[(pos[x]-i+n) % n]++; }
  cout<<*max_element(c.begin(),c.end())<<" \n";
}
