// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll int a,t,n,s; cin>>t;
    while(t--){
        cin>>n;
        int b=1;
        s=n*(n+1)/2;
    while(b<=n){ s-=2*b; b=b*2; }
 cout<<s<<endl;
}
}
