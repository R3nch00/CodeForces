// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T;
	for(cin>>T;T;T--) {
		int n; cin>>n;
		long long sum = 0;
		bool ok = 1;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			sum += x;
			if(sum<1LL*i*(i + 1)/2) ok = 0;
		}
		cout<<(ok ? "YES\n" : "NO\n");
	}
	return 0;
}
