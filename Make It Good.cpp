// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		int j(n - 1);
		while (j > 0 && a[j - 1] >= a[j])
			--j;
		while (j > 0 && a[j - 1] <= a[j])
			--j;
		cout << j << endl;
	}
}
