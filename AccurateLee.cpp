// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t,n; string s; cin>>t;
    while(t--&&cin>>n>>s){
        int o=s.find('1'); int z=s.rfind('0');
        if(z>o&&o !=-1 && z!=-1)
        s.erase(o,z-o);
        cout<<s<<'\n';
    }
}
