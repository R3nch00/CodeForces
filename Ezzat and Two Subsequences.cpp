#include <bits/stdc++.h>
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n,m= -1e9-2; cin>>n;
		long long s = 0;
		for (int i = 0, a; i < n; i++) {
			cin >> a;
			s += a;
			m = max(m, a);
		}
		cout << setprecision(10) << fixed << (s - m) / (n - 1.0) + m << '\n';
	}
}
