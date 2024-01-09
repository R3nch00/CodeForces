// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tt,i,ma,k,c,ans,n=2e5+2,a[n],b[n];  cin>>tt;
    while(tt--){
        cin>>n>>k;
    f(n) cin>>a[i];
    f(n) cin>>b[i];
    for(i=0,c=0,ma=0,ans=0;i<min(n,k);i++){
        c+=a[i]; ma=max(ma,b[i]);
        ans=max(ans,c+(k-1-i)*ma);
    }
    cout<<ans<<'\n';
  }
}
