// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void solve(){
int i,n,y; cin>>n; int a[n];
 for( i = 0; i < n; i++) cin >> a[i]; sort(a, a+n);
 if(a[0] != a[n-1]){ y = 0;
 while(a[y] == a[0]) y++;
 cout << y << ' ' << n-y << '\n';
 i = y; while(y--) cout << a[0] << '\n';
 for(; i < n; i++) cout << a[i] << ' ';
 cout << '\n';
 } else cout << -1 << '\n';
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}
