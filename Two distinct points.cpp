// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
#define st string
#define ve vector
#define ar array
#define pb push_back
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int a,l1,r1,l2,r2; cin>>a;
    while(a--){
        cin>>l1>>r1>>l2>>r2;
        cout<<l1<<" "<<l2+(l1==l2)<<endl;
    }
  return 0;
}
