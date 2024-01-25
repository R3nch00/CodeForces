// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int n,k,t;
int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		set<int>s; int mx=1e9,mn=0;
		for(int i=1;i<=n;i++){
			int ty,x; cin>>ty>>x;
			if(ty==2) mx=min(mx,x);
			else if(ty==1 )mn=max(mn,x);
			else s.insert(x);
		}
		int ans=mx-mn+1;
		for(auto i:s){ if(i>=mn && i<=mx) ans--; }
      cout<<max(ans,0)<<'\n';
	}

  return 0;
}
