// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
#define f(m) for(int i=0;i<m;i++)
using namespace std;
void test(){
    long long a,b,c;cin>>a>>b>>c;
    cout<<((c>=(b*(1+b)/2) && c<=b*(a+a-b+1)/2) ? "yes\n" : "no\n");
}
signed main(){
	cin.tie(0)->sync_with_stdio(0);
    int a; cin>>a;
    while(a--){ test(); }
    return 0;
}
