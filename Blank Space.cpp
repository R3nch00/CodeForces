#include <bits/stdc++.h>
using namespace std;
int a[110];
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		int cnt=0,ans=0;
		for(int i=1;i<=n;i++){
			cnt=a[i]==0?cnt+1:0;
			ans=max(cnt,ans);
		}
		cout<<ans<<endl;
	}
	return 0;
}
