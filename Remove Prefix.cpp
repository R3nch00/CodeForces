#include <bits/stdc++.h>
using namespace std ;
void solve(){
	int n; cin>>n;
	vector<int>v(n),fr(n+1);
	for(int &x:v){cin>>x;}
	int ans=0;
    for(int i=n-1;i>=0;--i){
    	fr[v[i]]++;
    	if(fr[v[i]]>1){ans=i+1;break;}
    }
	cout<<ans<<endl;
}
signed main(){
   int t;cin>>t;
   while(t--)solve();
 }
