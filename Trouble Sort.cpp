// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
#define ll long long int
using namespace std;
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T; cin>>T;
  while(T--){
    int n; cin>>n; vector<int> a(n);
    for(int& x:a) cin>>x;
    int s=0;
    f(n){ int x;cin>>x;s += x; }
    bool ok=1;
    if(s==0 || s==n){ ok = is_sorted(a.begin(), a.end()); }
    puts(ok ? "Yes" : "No");
  }
}
