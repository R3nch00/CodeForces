#include<bits/stdc++.h>
using namespace std;
int main(){
   int t; cin>>t;
   while(t--){
    string s,v; cin>>s;
    v=s.substr(0,s.size()/2);
    cout<<(v+v==s ? "YES\n" : "NO\n");
   }
}
