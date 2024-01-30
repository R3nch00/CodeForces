// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
main(){
    int n,x; cin>>n;
    while(cin>>n){ map<int,int> m;
    while(n--){ cin>>x; m[x]++ ? m[-x]++ : 0;}
  cout<<m.size()<<' ';}
}
