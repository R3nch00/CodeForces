// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Os")
#define int long long
#define st string
#define ve vector
#define ar array
#define ch char
#define pb push_back
#define bl bool
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    st a; int n,t; cin>>t;
    while(t--){
        cin>>n>>a;
        int br{};
    f(n){ br += (a[i] != '?') ? 1 : 0; }
      a[0]=(br==0) ? 'R' : a[0];
    for(int i=1;i<n;i++){
        if(a[i] == '?' && a[i-1] != '?'){
            (a[i-1]=='R') ? a[i]='B' : a[i]='R';}}
    for(int i=n-2;i>=0;i--){
       if(a[i] == '?' && a[i+1] != '?'){
            (a[i+1]=='R') ? a[i]='B' : a[i]='R';}}
   cout<<a<<endl;
  }
 return 0;
}

