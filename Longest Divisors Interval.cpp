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
    int t; ll n,i;
    for(cin>>t;t>0;t--){
        cin>>n;
    for(i=1;n%i==0;i++);
        cout<<i-1<<'\n';
    }
  return 0;
}
