// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
    ll x,y,n,mod=1e9+7;
    cin>>x>>y>>n;
    vector<ll> a(6);
    a[0]=x; a[1]=y;
    a[2]=a[1]-a[0];
    a[3]=a[2]-a[1];
    a[4]=a[3]-a[2];
    a[5]=a[4]-a[3];
  ll res= a[(n-1)%6];
  cout<<((res % mod) + mod) % mod;
 return 0;
}
