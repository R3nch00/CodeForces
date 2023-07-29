#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
	int t,x,c; cin>>t;
	while(t--) {
		cin>>x;
		bool s=0;
		for(int i=1;i<cbrt(x);i++) {
				c=cbrt(x-i*i*i);
				if(c*c*c == x-i*i*i) {
					s=1;
					break;
				}
		}
		if(s) cout << "YES\n";
		else cout << "NO\n" ;
	}
    return 0;
}
