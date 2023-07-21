#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve(){
    int n; cin>>n; int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int ans=0;
    for(int i=0;i<n;i++)ans+=a[i]-a[0];
    cout<<ans<<endl;
}
signed main(){
    int ts=1; cin>>ts;
    while(ts--)solve();
}
