// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void NISHI(){
	int n,m,r,c; cin>>n>>m>>r>>c;
	--r, --c;
	int ans = 3;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			char ch; cin>>ch;
			if (ch == 'B'){
				int x=2;
				x -= i == r;
				x -= j == c;
				ans = min(ans, x);
			}
		}
	}
	if(ans == 3) ans=-1;
	cout<<ans<<endl;
}
int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
 	int T; cin>>T;
 	while(T--) NISHI();
	return 0;
}
