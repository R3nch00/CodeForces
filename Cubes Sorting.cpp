// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n-1;i++)
#define f(k) for(int i{};i<=k;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,n,z,x,y;
    for(cin>>t;t--;){ cin>>n>>z; y=0;
    for(int i=2;i<=n;i++) cin>>x,y |= (z<=x),z=x;
    puts(y ? "YES" : "NO");
  }
return 0;
}

