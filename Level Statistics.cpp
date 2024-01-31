// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
#define ar array
#define ve vector
#define pb push_back
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
    int n,x=0,y=0; bool flag=true; cin>>n;
    while(n){
        int x1,y1; cin>>x1>>y1;
        if(x1<x || y1<y || x1-x < y1-y) flag=false;
        x=x1, y=y1; n--;}
    puts(flag ? "YES" : "NO");
}
signed main(){
    io;
    int t=1; cin>>t;
    while(t--) NISHI();
    return 0;
}
