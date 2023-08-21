// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t; cin>>n>>m;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){  cin>>t; v[t]=i; }
    long long t1(0),t2(0);
    while(m--){
        cin>>t; t1+=v[t]; t2+=(n-v[t]+1);
    }
    cout<<t1<<" "<<t2;
    return 0;
}
