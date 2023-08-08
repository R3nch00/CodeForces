// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x;
		while(--n){
			int y; cin>>y;
			x&=y;
		}
		cout<<x<<'\n';
	}
}
