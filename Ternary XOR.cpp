#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; string s,a(n,'0'); cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='2'){ s[i]='1'; a[i]='1'; }
        else if(s[i]=='1'){ a[i]='1'; s[i]='0'; break; }
    }
cout<<a<<endl<<s<<endl; }
return 0;
}
