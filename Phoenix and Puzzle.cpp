// mes que un club //
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int x = sqrt(n / 2), y = sqrt(n / 4);
        cout << ((x * x * 2 == n or y * y * 4 == n)? "YES\n" : "NO\n");
    }
}
