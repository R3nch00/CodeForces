// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int f(int n){
    int num=1,sum=0;
    while(n!=0){
        ll d=n%10; n/=10;
        if(!d)continue;
        sum+=num*d; num*=10;
    }
    return sum;
}
signed main(){
    ll a,b; cin>>a>>b;
    cout<<((f(a)+f(b)-f(a+b))==0 ? "YES" : "NO");
    return 0;
}
