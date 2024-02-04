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
    int n,x[205],y[205],ans=0; cin>>n;
    f(n) cin>>x[i]>>y[i];
    f(n){
        bool up=false,down=false,left=false,right=false;
      for(int j{};j<n;j++){
            if(x[j]==x[i] && y[j]>y[i]) up=true;
            if(x[j]==x[i] && y[j]<y[i]) down=true;
            if(x[j]<x[i] && y[j]==y[i]) left=true;
            if(x[j]>x[i] && y[j]==y[i]) right=true;
      }
    if(up && down && left && right) ans++;
    }
  cout<<ans;
  return 0;
}
