// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t; int a[t];
	for (int i = 0; i < t; i++) cin >> a[i];
	sort(a, a + t);
	cout << a[t - 1] - a[0] - t + 1;
}
