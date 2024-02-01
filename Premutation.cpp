// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
#define ve vector
#define ar array
#define pb push_back
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
pair<int,int> a[1005];
signed main(){
	io;
	int T; cin>>T;
	while(T--){
		int n; cin>>n;
    for(int i=1;i<=n;i++) a[i]={0,i};
    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
				int x; cin>>x; a[x].first+=j; }}
		sort(a+1,a+n+1);
    for(int i=1;i<=n;i++) cout<<a[i].second<<" \n";
  }
 return 0;
}
