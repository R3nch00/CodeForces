// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(t) for(int i{};i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL);cin.tie(nullptr);
    ll t; cin>>t;
    while(t--){ ll n,s=0; cin>>n; ll a[n+1];
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=n-1;i>0;i--){
        if(a[i+1]==0){ s=-1; break; }
    while(a[i]>=a[i+1]) a[i]/=2,s++; }
  cout<<s<<endl; }
return 0;
}
