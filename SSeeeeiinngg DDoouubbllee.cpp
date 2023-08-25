// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s,r; cin>>s; r=s;
    reverse(r.begin(),r.end());
    cout<<s+r<<endl;
    }
}
