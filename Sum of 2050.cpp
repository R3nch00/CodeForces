// mes que un club //
#import <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	ll n; cin>>n;
	if(n%2050){
		cout<<"-1\n";
		return;
	}
	n/=2050;
	int ans=0;
	for(;n;n/=10) ans+=n%10;
	cout<<ans<<"\n";
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int t; cin>>t;
	while(t--) solve();
	return 0;
}
