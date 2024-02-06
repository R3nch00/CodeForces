#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
#define st string
#define ve vector
#define ar array
#define pb push_back
#define f(n) for(int i{},i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int n; cin>>n;
    while(n--){
        ll a,b; cin>>a>>b;
        int sum{};
        ll x=max(a,b), y=min(a,b);
    while(x>y){
        y*=2; sum++;}
    cout<<((x!=y)? -1 : sum/3+min(sum%3,1))<<endl;
   }
  return 0;
}
