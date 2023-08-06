// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void NISH(){
    int n; cin>>n; string s; cin>>s;
    for(int i=0;i<=4;i++){
        if(s.substr(0,i)+s.substr(n-4+i,4-i)=="2020"){
            cout<<"YES"<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";
}
int main(){
    int t; cin>>t;
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    while(t--) NISH();
    return 0;
}
