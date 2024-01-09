// mes que un club //
#include <bits/stdc++.h>
#define f(m) for(int i=0;i<m;++i)
#define ll long long
using namespace std;
int main(){
    int i,t,n,m,ans; char a[55],b[55];
    cin>>t;
    while(t--){
        ans=0; cin>>n>>m>>a>>b;
        f(m) a[n+i]=b[m-1-i];
        for(i=1;i<n+m;++i) ans+=a[i]==a[i-1];
    puts(ans<=1 ? "Yes" : "No");
    }
}
