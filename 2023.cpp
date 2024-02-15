// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Os")
#define ll long long
#define st string
#define ve vector
#define ar array
#define pb push_back
#define bl bool
#define f(n) for(int i=0;i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    int t; cin>>t;
    while(t--){
        ll n,k,s=1; cin>>n>>k;
    f(n){ int l; cin>>l; s*=l; }
    if(2023%s!=0) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
    for(int i=0;i<k-1;i++)
        cout<<1<<' ';
        cout<<2023/s<<endl;
    }
  }
}
