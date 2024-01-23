// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
void NISHI(){
  int n,x; cin>>n;
  vector<int> cnt(30,0);
    f(n){ cin >> x; int msb = log2(x); cnt[msb]++; }
  ll ans = 0;
  for(int i{};i<30;i++){
    ans += 1LL*cnt[i]*(cnt[i]-1)/2;
  }
  cout<<ans<<'\n';
}
int main(){
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int c; cin>>c;
  while(c--){ NISHI(); }
 return 0;
}
