// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int r[100010],b[100010];
    int t; cin>>t;
	while(t--){
		int n,m,x; cin>>n;
		int mx1=0,mx2=0;
		for(int i=1;i<=n;i++){
			cin>>x;
			r[i]=r[i-1]+x;
			mx1=max(mx1,r[i]);
		}
		cin>>m;
		for(int i=1;i<=m;i++){
			cin>>x;
			b[i]=b[i-1]+x;
			mx2=max(mx2,b[i]);
		}
		cout<<mx1+mx2<<endl;
	}
	return 0;
}
