// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,h,m; cin>>t;
	while(t--){
		cin>>n>>h>>m;
		int s=h*60+m,ans=100000;
		while(n--){
			cin>>h>>m;
			int p=h*60+m;
			if(p<s)p+=(24*60);
			ans=min(ans,p-s);
		}
		cout<<ans/60<<" "<<ans%60<<endl;
	}
}
