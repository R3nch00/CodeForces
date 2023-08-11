// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    ll n; cin>>n; ll ans=0,m=0,z=0;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        z+=x==0; m+=x<0; x=abs(x); ans+=abs(x-1);
    }
    if(m%2){
        if(!z)ans+=2;
    }
    cout<<ans<<endl;
}
