// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long
#define st string
#define ve vector
#define ar array
#define pb push_back
#define f(a) for(int i{};i<a;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int t; cin>>t;
    while(t--){
        int a=0; st s; cin>>s;
    for(int i{};i<s.size()-1;i++){ if(s[i]+s[i+1]-2*'0'>9) a=i; }
    f(a){ cout<<s[i]; }
        cout<<(s[a]+s[a+1]-2*'0');
    for(int i=a+2;i<s.size();i++) cout<<s[i];
  cout<<"\n";
    }
 return 0;
}
