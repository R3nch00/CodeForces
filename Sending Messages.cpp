// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
	int T; cin>>T;
	for(ll n,f,a,b,m,pre;T--;){ cin>>n>>f>>a>>b;
		for(int i=pre=0;i<n;i++){
			cin>>m;
			f -= min(b,(m-pre)*a); pre=m; }
    puts( f <= 0 ? "NO" : "YES");
  }
}
