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
#define f(n) for(int i=1;i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
    io;
    st s1,s2; int f{}; cin>>s1>>s2;
    for(int i=s1.size()-1,j=s2.size()-1;i>=0 && j>=0;i--,j--){
      if (s1[i]==s2[j]) f++; else break;
     }
  cout<<s1.size()+s2.size()-(2*f)<<endl;
}
