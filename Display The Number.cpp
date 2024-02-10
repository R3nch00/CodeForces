// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
#define st string
#define ve vector
#define ar array
#define pb push_back
#define f(n) for(int i=1;i<=n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
    ll n; cin>>n;
    if(n%2 && n>2){ cout<<7; n-=3; }
    st s(n/2,'1'); cout<<s<<'\n';
}
signed main(){
    io;
    ll a; cin>>a;
    while(a--) NISHI();
  return 0;
}
