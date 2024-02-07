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
const int N=2e5+20; int a[N];
using namespace std;
signed main(){
    io;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
    f(n) cin>>a[i];
      sort(a+1,a+n+1);
    for(int i=2;i<=n/2+1;i++) cout<<a[i]<<' '<<a[1]<<'\n';
  }
}
