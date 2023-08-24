// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while (t--){
		int n,odd=0,m=INT_MAX,x;cin>>n;
		while (n--) cin >> x, odd |= x, m = min(m,x);
		puts((odd &1) ? ((m & 1) ? "YES" : "NO") : "YES");
	}
}
