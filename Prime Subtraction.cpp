// mes que un club //
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        ll x,y,z; cin>>x>>y; z=x-y;
        puts(z<2 ? "NO" : "YES");
    }
}
