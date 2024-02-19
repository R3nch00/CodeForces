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
    int t;
    for(cin>>t;t;t-=1){
        int n; cin>>n; st s;
    for(int i{};i<n-2;i+=1){
        st t; cin>>t;
      (not s.empty() && t[0]==s.back()) ? s+=t[1] : s+=t; }
     if(s.size()<n) s+='a';
     cout<<s<<'\n';
    }
  return 0;
}
