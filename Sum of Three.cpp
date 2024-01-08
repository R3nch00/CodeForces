// mes que un club //
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<(n<=6 || n==9 ? "NO" : "YES")<<endl;
        if(!(n<=6 || n==9)){
            cout<<"1 "<<2+2*(n%3==0)<<" "<<n-3-2*(n%3==0)<<endl;
        }
    }
    return 0;
}
