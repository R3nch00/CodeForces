#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n; cin >> n;
  vector<pair<int, int>> a(n);
  for (auto &[x, y] : a) cin >> x >> y;
  sort(a.begin(), a.end());
  int day = 0;
  for (auto [x, y] : a) {
    (y >= day) ? day = y :   day = x;
  }
  cout << day << '\n';
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}
