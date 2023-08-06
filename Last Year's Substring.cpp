// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void NISH(){ 
    int n;  string s; cin>>n>>s;
    bool ok = false ;
    for(int i=0;i<=4;i++){
        int j=4-i;
        if (s.substr(0,i)+s.substr(n-j)=="2020")
            ok=true;
        }
    cout<<(ok ? "YES" : "NO")<<"\n";
    }
int main(){
    int t; cin>>t;
    while(t--) NISH();
}
	
