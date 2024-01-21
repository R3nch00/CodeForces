// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL); cin.tie(nullptr);
    ll t; cin>>t;
    while(t--){ ll n,m; cin>>n>>m;
        ll a[m+n]; ll s=0;
    for(ll i=0;i<n+m;i++) cin>>a[i];
        sort(a,a+n+m-1); reverse(a,a+n+m);
    for(ll i=0;i<n;i++) s+=a[i]; cout<<s<<endl; s=0;
  }
return 0;
}
