// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
main(){
    io;
    int t; cin>>t;
	while(t--){
      int n; cin>>n; vector<int> q(n);
		for(auto &x:q) cin>>x;
		for(auto t:q) cout<<n+1-t<<" ";
		cout<<endl;
	}
}
