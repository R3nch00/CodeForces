// mes que un club //
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; string s; cin>>n>>s;
    for(int i=0;i<n-2;i++){
        cout<<s[i];
        if(s[i+2]=='a' || s[i+2]=='e'){ cout<<'.'; }
      }
        cout<<s[n-2]<<s[n-1]<<endl;
    }
}
