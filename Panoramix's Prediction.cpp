#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x),end(x)
int main(){
    int n,m,i; cin>>n>>m;
    for(i=n+1;i<=m;++i){bool fl=true;
        for(int j=2;j<=i/2;++j){
            if(i%j == 0){
                fl=false;
                break;} }
        if(fl) break;
    }
    cout<<(i==m ? "YES" : "NO");
}
