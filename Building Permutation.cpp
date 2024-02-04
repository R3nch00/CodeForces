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
    int n; cin>>n; int a[n]; ll cnt=0,ans=0;
    f(n) cin>>a[i]; sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        ans+=abs(a[i]-(n-cnt)); cnt++; }
  cout<<ans;
}
