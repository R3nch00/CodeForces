// mes que un club //
#import <bits/stdc++.h>
#define int long long
using namespace std;
int a[200020];
signed main(){
ios::sync_with_stdio(0);
int T; cin>>T;
while(T--){
int n; cin>>n;
for(int i=1;i<=n;i++) cin>>a[i];
sort(a+1,a+n+1,greater<int>());
int ans=a[n];
for(int i=n-1;i>=1;i--) ans=max(ans,a[i]-a[i+1]);
cout<<ans<<endl;
    }
}
