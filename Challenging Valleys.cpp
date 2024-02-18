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
#define f(n) for(int i=1;i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
    int n,a1,a,s{}; cin>>n>>a1;
    f(n){
      cin>>a;
      if(a1<a) s=max(s,1);
      if(a1>a && s>0) s=2;
      a1=a;
    }
   puts((s<2) ? "YES" : "NO");
 }
signed main(){
    io;
    int f; cin>>f;
    while(f--){ NISHI(); }
}
