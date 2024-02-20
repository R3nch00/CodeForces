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
#define f(b) for(int i=1;i<=b;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int x=1e9+7;
using namespace std;
void NISHI(){
    ll a,b,ans=1; cin>>a>>b;
    f(b) ans=ans*a%x;
      cout<<ans<<endl;
}
signed main(){
    io;
    int t; cin>>t;
    while(t--){ NISHI(); }
}
