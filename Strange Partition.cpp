// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll a,n,x,maxn,minn,sum;
	int t; cin>>t;
	while(t--){
		maxn=0;minn=0,sum=0; cin>>n>>x;
		for(int i=1;i<=n;i++){
			cin>>a;
			sum+=a;
			maxn+=(a+x-1)/x;
		}
		minn=(sum+x-1)/x;
		cout<<minn<<" "<<maxn<<endl;
	}
	return 0;
}
