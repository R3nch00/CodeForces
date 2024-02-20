// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Os")
#define st string
#define ve vector
#define ar array
#define ch char
#define pb push_back
#define bl bool
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
deque<int> d; int t,n,i,u,x,y,s;
signed main(){
    io;
    cin>>t;
    while(t--){
        cin>>n; x=y=s=0;
    f(n){ cin>>u; d.push_back(u); }
    while(d.size()){
      if(x<=y) x+=d.front(), d.pop_front(); else y+=d.back(), d.pop_back();
      if(x==y) s=n-d.size();
    }
   cout<<s<<'\n';
  }
}
