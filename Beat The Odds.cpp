#include<bits/stdc++.h>
using namespace std;
long long t,n,s;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>t;
    while (t--){
        cin>>n;s=0;
    for(int i=1;i<=n;++i){ int x; cin>>x; if (x&1) ++s; }
    cout<<min(s,n-s)<<'\n';
    }
return 0;
}
