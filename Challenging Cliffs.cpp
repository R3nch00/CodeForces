// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n; vector<int> h(n);
    for (auto &i : h) cin >> i;
    sort(h.begin(), h.end());
    int p = 0;
    for (int i = 1; i < n-1; ++i)
      if (h[i+1] - h[i] < h[p+1] - h[p])
        p = i;
    swap(h[p], h[p+1]);
    for (int i = p+1; i < n; ++i)
      cout << h[i] << ' ';
    for (int i = 0; i <= p; ++i)
      cout << h[i] << " \n"[i == p];
  }
}
