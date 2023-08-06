// mes que un club //
#import <bits/stdc++.h>
#define gg '\n'
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,fl=0,dv=0,pv=0,f; cin>>n;
    for(int i=0;i<n;i++){
        cin>>f;
        if(f==25)dv++;
        if(f==50){pv++;dv--;if(dv<0){fl=1;break;}}
        if(f==100){if(pv>0){pv--; dv--;}else dv-=3;if(dv<0){fl=1;break;}}
    }
    cout<<((fl==0) ? "YES" : "NO");
}
