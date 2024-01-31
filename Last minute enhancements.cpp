// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
#define ar array
#define ve vector
#define pb push_back
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
	int n; cin>>n;
	int x,pre=0,ans=0;
	f(n){
		cin>>x;
		if(x > pre){ ans++; pre=x; }
		else if(pre == x){ ans++; pre = x+1; }
	}
  cout<<ans<<'\n';
}
signed main(){
	io;
	int n=1; cin>>n;
	while (n--) NISHI();
}
