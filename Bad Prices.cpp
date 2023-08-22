// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--){
	  int x; cin>>x; int a[x],mn=1e9,ans=0;
	  for(int i=0;i<x;i++) cin>>a[i];
	  for(int i=x-1;i>=0;i--){
	    if(mn<a[i]) ans++;
	    mn=min(mn,a[i]);
	  }
	  cout<<ans<<"\n";
	}
	return 0;
}
