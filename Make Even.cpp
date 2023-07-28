#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    bool e=0;
    for(char c:s) e|=(c-'0')%2 ==0;
    cout<<(!e?-1:(s[(int)s.size()-1]-'0')%2==0?0:(s[0]-'0')%2==0?1:2)<<'\n';
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}
