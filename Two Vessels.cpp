// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
void NISHI(){
    int a,b,c; cin>>a>>b>>c;
    cout<<(abs(a-b)+2*c-1)/(2*c)<<'\n';
}
int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int t=1; cin>>t;
    while(t--){ NISHI(); }
}
