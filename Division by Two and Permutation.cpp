// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main() {
  int T; cin>>T;
  while(T--){
    int n; cin>>n;
    vector<int> a(n + 1);
    f(n) {int j; cin >> j;
        while(j > n || a[j]){
            j /= 2;
        if(j == 0) break;
      }
      a[j]++;
    }
    cout << (a[0] ? "NO" : "YES") << endl;
  }
  return 0;
}
