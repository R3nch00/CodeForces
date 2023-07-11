#include <bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
  for(cin>>t;cin>>n;)
    cout<<(n/2020 >= n%2020 ? "YES\n" : "NO\n");
}
