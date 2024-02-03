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
int n,x,mxx,ans,mx,T;
using namespace std;
signed main(){
    io;
    cin>>T;
    for(;T--;){
        cin>>n; ans=0; mx=-1e9;
    for(;n--;){ cin>>x; mx=max(mx,x); mxx=max(mxx,mx-x); }
    for(;mxx>0;mxx>>=1){ ans++; }
  cout<<ans<<endl;
    }
 return 0;
}
