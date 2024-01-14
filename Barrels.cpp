// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f1(n) for(int i{};i<n;i++)
#define f2(k) for(int i{};i<=k;i++)
int n,k;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> a(n);
        f1(n) cin>>a[i];
        sort(a.begin(),a.end());
        ll ans=0;
        f2(k) if(n-i-1>=0) ans += a[n-i-1];
        cout<<ans<<endl;
    }
}
