// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t; cin>>t;
	while(t--) {
		int n,x; cin>>n>>x;
		long long w=0;
		int ans=0; int a[n];
		for(int i=0;i<n;i++){
			int tmp; cin>>tmp;
			a[i]=tmp-x;
		}
		sort(a,a+n);
		for(int i=n-1;i>=0;i--){
			if(w+a[i]>=0) w+=a[i],ans++;
			else break;
		}
		cout<<ans<<endl;
	}
	return 0;
}
