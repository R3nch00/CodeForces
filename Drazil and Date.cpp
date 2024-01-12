// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ll a,b,s; cin>>a>>b>>s;
	a=abs(a); b=abs(b);
	puts(((s-a-b)<0 || (s-a-b)%2) ? "NO" : "YES");
}
