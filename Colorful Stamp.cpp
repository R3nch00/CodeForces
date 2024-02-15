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
#define f(n) for(int i=1;i<=n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
    int a{},b{},flag{},n; cin>>n;
    f(n){
      ch op; cin>>op;
      if(op=='R') a++;
      else if(op=='B') b++;
      else{
        if(a&&!b || b&&!a) flag=1;
        a=0,b=0;
      }
    }
    if(a&&!b || b&&!a) flag=1;
      puts(flag ? "NO" : "YES");
}
signed main(){
    io;
    int f; cin>>f;
    while(f--){
        NISHI();
    }
   return 0;
}
