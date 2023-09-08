// mes que un club //
#import <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N]={0};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t; cin>>t;
    while(t--){
    	int n,q,l,r,k; cin>>n>>q;
    	for(int i=1;i<=n;i++) cin>>a[i],a[i]+=a[i-1];
    	while(q--){ cin>>l>>r>>k;
    	cout<<(((a[n]-a[r]+a[l-1]+(r-l+1)*k)%2==0)? "NO\n" : "YES\n");
		}
	}
	return 0;
}
