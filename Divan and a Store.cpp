// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
ll n,l,r,K,a[500];
int main(){
	ll T; cin>>T;
	while(T--){
		cin>>n>>l>>r>>K;
		f(n) cin>>a[i];
		sort(a,a+n);
		int ans=0;
		f(n){if(K<a[i]) break;
            if(a[i]>=l && a[i]<=r){ K-=a[i]; ans++; }}
		cout<<ans<<'\n';
	}
}
