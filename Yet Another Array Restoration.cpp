// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int a,b,n,x,y,t,i;
main(){
    for(cin>>t;t--;cout<<'\n'){ cin>>n>>x>>y;
        for(i=n-1;i;i--) if((y-x)%i<1)break; b=(y-x)/i;
            for(a=max(x%b,x-(n-i-1)*b),a ? : a=b;n--;a+=b) cout<<a<<' ';
    }
}
