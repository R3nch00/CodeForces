// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Os")
#define ll long long
#define st string
#define ve vector
#define ar array
#define ch char
#define pb push_back
#define bl bool
#define f(n) for(int i{};i<n;++i)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
    int n; cin>>n;
    set<string> s; st temp;
   f(n){ cin>>temp; s.insert(temp); }
  puts(s.size()>2 ? "TRIANGLE" : "SQUARE");
}
signed main(){
    io;
    int N=1; cin>>N;
    while(N--) NISHI();
  return 0;
}
