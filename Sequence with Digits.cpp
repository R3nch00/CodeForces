// mes que un club //
#import <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ll t; cin>>t;
	while(t--){
    ll n,k; cin>>n>>k;
    for(ll i=2;i<=k;i++){
        ll x=9,y=0,p=n;
			while(p){
				x=min(x,p%10); y=max(y,p%10); p/=10;
			}
			if(!x) break;
			n+=(x*y);
		}
		cout<<n<<endl;
	}
	return 0;
}
