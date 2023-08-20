// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int a[100010],ans[100010];
int main() {
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		for (int i = 0; i < n; ++i) scanf_s("%d", &a[i]);
		sort(a, a + n);
		int r = 0, l = n - 1, t = n;
		while (n>0){
			ans[n--] = a[r++];
			ans[n--] = a[l--];
		}
		for (int i = 1; i <= t; ++i) printf("%d ", ans[i]);
		cout << endl;
	}
	return 0;
}
