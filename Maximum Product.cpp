// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Os")
#define int long long
#define st string
#define ve vector
#define ar array
#define ch char
#define pb push_back
#define bl bool
#define f(n) for(int i=1;i<=n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N=1e5+100; int a[N],ans;
using namespace std;
signed main(){
    io;
    int f; cin>>f;
    while(f--){
        int n,ans{}; cin>>n;
    f(n){ cin>>a[i]; }
    sort(a+1,a+1+n);
		ans=a[n]*a[n-1]*a[n-2]*a[n-3]*a[n-4];
		ans=max(ans,a[1]*a[2]*a[n]*a[n-1]*a[n-2]);
		ans=max(ans,a[1]*a[2]*a[3]*a[4]*a[n]);
    cout<<ans<<"\n";
    }
  return 0;
}
