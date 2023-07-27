#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,a,b;
  for(cin>>t;t--;) cin>>a>>b,
    cout<<(a==b ? 0 : (a<b and (b-a)%2) or (a>b and !((a-b)%2)) ? 1 : 2)<<endl;
}
