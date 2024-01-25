// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    io;
    int t,n; string s;
    for(cin>>t;cin>>n>>s;){
        int d=0;
    for(char c:s)
      (c == 'Q') ? ++d :  d=max(0,d-1);
    puts((d>0) ? "No" : "Yes");
  }
}
