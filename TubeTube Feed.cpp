// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=1;i<=n;i++)
int T,n,m,ans,a[1001],b[1001];
using namespace std;
void NISHI(){
    cin>>n>>m,ans=0;
    f(n) cin>>a[i];
    f(n) cin>>b[i];
    f(n) if(a[i]+i-1<=m)
        if(b[i]>b[ans]) ans=i;
    cout<<(ans ? ans : -1)<<'\n';
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	for(cin>>T;T;T--) NISHI();
	return 0;
}
