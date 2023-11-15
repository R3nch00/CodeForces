// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
#define f(m) for(int i=0;i<m;i++)
using namespace std;
signed main() {
    ll a,b,c,d,e,f,g,p; cin>>a;
    while(a--){
        cin>>b>>c>>d>>e; p=b%2+c%2+d%2+e%2;
        cout<<((p<2||p>2&&b*c*d) ? "YES" : "NO")<<endl;
    }
    return 0;
}

