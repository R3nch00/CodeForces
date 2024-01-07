// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(i=1;i<=n;i++)
using namespace std;
signed main(){
  cin.tie(0)->sync_with_stdio(0);
  for(int tc=(cin>>tc,tc);tc--;){
    int a=1e9,b=1e9,c=0,d,n; cin>>n;
    while (n--){
      cin>>d;
      auto& mn = a > b ? b: a;
      auto& mx = a > b ? a: b;
      if (d <= mn) mn = d;
      else if (d <= mx) mx = d;
      else mn = d, ++c;
    }
    cout<<c<<'\n';
  }
}
