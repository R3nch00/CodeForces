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
    int t; cin>>t;
    while(t--){
      int n; cin>>n; int a[n];
      f(n) cin>>a[i];
      sort(a,a+n);
    cout<<a[n-1]-a[0]<<endl;
  }
}
