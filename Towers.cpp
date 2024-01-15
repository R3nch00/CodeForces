// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define f(k) for(int i{};i<=k;i++)
using namespace std;
int main(){
    map<int,int>m; int ans=0,x,n; cin>>n;
    while(n--){ cin>>x; m[x]++; ans=max(ans,m[x]); }
cout<<ans<<" "<<m.size()<<'\n';
}
