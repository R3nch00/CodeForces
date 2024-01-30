// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n,a,m;
int main(){
    io;
    int T; cin>>T;
    for(;T--;){ cin>>n>>m;
        for(;n--;){ cin>>a; m -= a; }
      puts(m ? "NO" : "YES"); }
  return 0;
}
