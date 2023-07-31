#include <bits/stdc++.h>
using namespace std;
void solve (){
    string s; cin>>s;
    map<char,int>a;
    int cnt=0;
    for(auto &i:s) a[i]++;
    for(auto i:a) cnt+= min(i.second, 2);
    cout<<cnt/2<<endl;
}
int main(){
    int t; cin>>t;
    while(t-->0) solve();
}
