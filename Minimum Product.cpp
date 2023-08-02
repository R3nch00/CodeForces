#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int a,b,x,y,n; cin>>a>>b>>x>>y>>n;
        cout<<min(max(x,a-n)*max(y,b-(n-(a-(max(x,a-n))))),max(y,b-n)*max(x,a-(n-(b-max(y,b-n)))))<<endl;
    }
    return 0;
}
