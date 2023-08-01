#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005];
int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		for(ll i=1;i<=n;i++){ cin>>a[i]; }
		ll ans = 0;
		for (int i = n; i > 0; i--){
			if (a[i] + i <= n)
				a[i] += a[i + a[i]];
			ans=max(a[i], ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}
