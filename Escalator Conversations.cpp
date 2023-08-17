// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int T,n,m,k,h,x,c,u;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cin>>T;
	while(T--){
		c=0; cin>>n>>m>>k>>h;
		while(n--){
			cin>>x; u=abs(h-x);
			if(u%k==0&&u/k<m&&u)
				c++;
		}cout<<c<<"\n";
	}return 0;
}
