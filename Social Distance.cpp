// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    io;
    ll t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k; string s; cin>>s;
        ll t=k,ans=0;
    f(n){ (s[i] == '0') ? t++ : (t-=k, ans += (t/(k+1)), t=0); }
    ans += (t/(k+1));
  cout<<ans<<endl;}
}

