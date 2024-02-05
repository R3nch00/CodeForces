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
    int n,t; cin>>t;
    while(t--){
        cin>>n; int a[2*n];
        f(2*n) cin>>a[i];
        sort(a,a+2*n);
        cout<<a[n]-a[n-1]<<endl;
    }
  return 0;
}
