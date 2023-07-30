#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t>0){
        int n; cin>>n; string s; cin>>s; unordered_set<string> m;
    for(int i = 0; i<n-1; i++){
    m.insert(s.substr(i,2));
    }
    cout<<m.size()<<endl;
t--;}
return 0;}
