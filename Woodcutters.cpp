// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=1;i<=n;++i)
int n,x[100005],h[100005],ans=2;
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin>>n;
    f(n){ cin>>x[i]>>h[i]; }
    for(int i=2;i<=n-1;++i){
        if(x[i]-h[i]>x[i-1]){ ++ans; }
        else if(x[i]+h[i]<x[i+1]){ ++ans; x[i]+=h[i]; }
    }
    cout<<(n==1 ? 1 : ans);
    return 0;
}
