// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
const int N=2e5+15;
ll s[N],ss[N]; int a[N];
main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,q; cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=q;i++){
        int l,r; cin>>l>>r;
        s[l]+=1; s[r+1]-=1;}
    for(int i=1;i<=n;i++) s[i]+=s[i-1];
    sort(a+1,a+1+n);
    sort(s+1,s+1+n);
    ll ans=0;
    for(int i=1;i<=n;i++){
        ans += 1ll*s[i]*a[i];}
  cout<<ans;
}
