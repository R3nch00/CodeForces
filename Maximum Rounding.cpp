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
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    int t; cin>>t;
    while(t--){
        int p=-1; st s; cin>>s;
    for(int i=s.size()-1;i;i--)
    if(s[i]>='5'){ s[i-1]++; p=i; }
    if(s[0]>='5') cout<<'1',p=0;
    for(int i=p;i<s.size();i++) s[i]='0';
   cout<<s<<"\n";
  }
 return 0;
}
