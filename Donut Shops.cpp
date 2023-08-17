// mes que un club //
#import <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        ll a, b, c; cin>>a>>b>>c;
        cout<<(a<c ? 1 : -1)<<' '<<(c<a*b ? b : -1)<<endl;
    }
}
