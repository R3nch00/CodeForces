#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,p,q,r[123456],m,n,o; cin>>o>>n;
        for(i=1;i<=n;i++){cin>>p>>q; r[p]+=q; if(m<p){m=p;}}
        for(i=1;i<=m;i++){if(o>i){o+=r[i];}}
        cout<<((o>m) ? "YES":"NO");
}

