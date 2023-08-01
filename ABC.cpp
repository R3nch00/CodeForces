#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; int t,n; cin>>t;
    while(t--){
        cin>>n>>s;
        cout<<( s=="01" || s=="10" || n==1 ? "YES\n" : "NO\n" );
    }
}
