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
        int n; cin>>n;
        st a="aaa"; n-=3;
      for(int i=2;i>=0;i--){
        int x=min(25,n);
        a[i]+=x; n-=x;
      }
     cout<<a<<"\n";
    }
}
