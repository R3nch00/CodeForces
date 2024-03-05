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
#define f(n) for(int i{};i<=n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int a[500000];
void NISHI(){
    int n,t; cin>>n;
    f(n) a[i]=0;
    while(n--){
        cin>>t;
        cout<<char('a'+a[t]++);
    }
  cout<<"\n";
}
signed main(){
    io;
    int n; cin>>n;
    while(n--) NISHI();
}
