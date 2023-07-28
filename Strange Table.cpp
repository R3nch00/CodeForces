#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main( ){
    ll t; cin>>t;
    while(t--){
        ll n,m,x; cin>>n>>m>>x;
        x--;
        cout<<(x%n*m+x/n+1)<<endl;
    }
}
