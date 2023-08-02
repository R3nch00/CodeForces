#include <bits/stdc++.h>
using namespace std;
int main(){
  long long t,r,b,d;
  for(cin>>t;cin>>r>>b>>d;)
    cout<<(min(r,b)*(d+1) < max(r,b) ? "NO" : "YES")<<endl;
}
