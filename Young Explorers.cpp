// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define sp " "
#define nl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
	ll t,n,i; cin>>t;
	while(t--){
		cin>>n;
		ll e[n],c=0,ans=0;
		for(i=0;i<n;i++)
		cin>>e[i];
		sort(e,e+n);
		for(i=0;i<n;i++){
			c++;
			if(e[i]<=c){ ans++; c=0; }
		}
		cout<<ans<<nl;
	}
	return 0;
}
