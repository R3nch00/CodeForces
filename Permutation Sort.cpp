// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    if (is_sorted(a.begin(), a.end()))
      cout << "0\n";
    else if (a[1] == 1 or a[n] == n)
      cout << "1\n";
    else if (a[1] == n and a[n] == 1)
      cout << "3\n";
    else
      cout << "2\n";
  }
}
