#include <bits/stdc++.h>
using namespace std;
int search(int a,int b){
    if(b<a) return 1;
    if(a==0) return 2;
    return search(b-a,a)+1;
}
void solve(){
    int n,k; cin>>n>>k;
    int ans=0;
    for(int i=0;i<=n;i++){
        int x=search(i,n);
        if(x>=k) ans++;
    }
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t=1;cin>>t;
    while (t--) solve();
}
