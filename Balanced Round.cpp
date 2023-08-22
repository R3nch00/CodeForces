// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int n,k,a[200005];
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		sort(a+1,a+n+1);
		int now=1,ans=1;
		for(int i=2;i<=n;i++){
			if(a[i]-a[i-1]>k) now=0;
			now++;
			ans=max(ans,now);
		}
		cout<<n-ans<<endl;
	}
	return 0;
}
