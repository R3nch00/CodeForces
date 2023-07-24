#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,a,b,c; cin>>t;
  while(t--){ cin>>a>>b>>c;
    cout<<(a+b>=10 or a+c>=10 or b+c>=10 ? "YES\n" : "NO\n");}
}
