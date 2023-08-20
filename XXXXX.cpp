// mes que un club //
#import <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void NISHI(){
    int n, x, a; cin >> n >> x;
    int sum = 0, l = -1;
    for (int i = 0; i < n; i++){
        cin >> a;
        sum = sum + a;
        if (sum % x) l = max(l, max(i + 1, n - (i + 1)));
    }
    cout << l << endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
        NISHI();
}
