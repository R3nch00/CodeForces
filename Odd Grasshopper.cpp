// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T; cin>>T;
    while (T--) {
    ll x, n; cin >> x >> n;
    for (ll j = 4*(n/4)+1; j <= n; j++) {
      (x & 1) ? x += j : x -= j;
    }
    cout << x << '\n';
  }
}
