// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
string z = "vika";
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--){
		int x,k,nxt=0; cin>>x>>k; char a[x+1][k+1];
		for(int i=1;i<=x;i++)
			for(int j=1;j<=k;j++) cin>>a[i][j];

		for(int i=1;i<=k;i++){
			if(nxt==4) break;
			for(int j=1;j<=x;j++){
				if(a[j][i]==z[nxt]){
					nxt++; break;
				}
			}
		}
		cout<<(nxt==4 ? "YES" : "NO")<<"\n";
	}
	return 0;
}
