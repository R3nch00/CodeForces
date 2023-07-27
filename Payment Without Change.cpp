#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll q; cin>>q;
    while(q--){
        ll a,b,n,s; cin>>a>>b>>n>>s;
        bool ans=(n*a+b>=s) && (b>=s%n);
        puts(ans ? "YES" :"NO");
    }
	return 0;
}
