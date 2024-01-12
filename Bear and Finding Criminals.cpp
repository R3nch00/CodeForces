// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=1;i<=n;i++)
using namespace std;
int main(){
     int n,x,dis,j; cin>>n>>x; int a[n+1],cnt=0,mx=0;
     f(n) cin>>a[i];
     f(n) if(a[i]){
        dis=i-x; j=x-dis;
        if(j<1 || j>n || a[i]==a[j]) cnt++;
     }
     cout<<cnt;
return 0;
}
