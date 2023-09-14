// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,m,a=0,b=0,num; cin>>n;
    for (int i=0;i<n;++i)
        cin>>num, a=max(a,num);
        cin>>m;
    for(int i=0;i<m;++i)
        cin>>num, b=max(b,num);
    cout<<a<<" "<<b;
}
