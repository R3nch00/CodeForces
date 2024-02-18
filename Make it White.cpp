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
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
    int n; cin>>n;
    st s; cin>>s;
    cout<<s.find_last_of('B')-s.find('B')+1<<'\n';
  }
signed main(){
    io;
    int t; cin>>t;
    while(t--) NISHI();
}
