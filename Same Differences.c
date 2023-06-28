#include<bits/stdc++.h>
using namespace std;
int main(){
int T; cin>>T;
while(T--){ int n,x; long long ans=0; cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){ cin>>x; ans+=mp[x-i]++; } cout<<ans<<endl; }}
