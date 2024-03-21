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
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define lb lower_bound
#define ub upper_bound
#define f(b) for(int i{};i<b;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    int a,b; ll c,d;
    cin>>a;
    while(a--){
        cin>>b; d=1;
      f(b){ cin>>c; d*=c; }
     d+=b-1;
    cout<<d*2022<<"\n";
  }
}
