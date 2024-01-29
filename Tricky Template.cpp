// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int T,n; string a,b,c;
int main(){
    io;
    cin>>T;
    while(T--){
        cin>>n>>a>>b>>c; bool f=0;
        f(n) if(a[i]!=c[i]&&b[i]!=c[i]) f=1;
        puts(f ? "YES" : "NO");
    }
}
