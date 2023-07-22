#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[100005],i,x,y,ans;
vector<ll> op[100005];
void dfs(ll x,ll fa,ll s){
	if(s>m) return ;
	ll son = 0;
	for(ll i=0;i<op[x].size();i++){
		if(op[x][i]==fa) continue;
		son ++;
		if(a[op[x][i]]) dfs(op[x][i],x,s+1);
		else dfs(op[x][i],x,0);
	}
	ans += !son;
}
int main(){
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<n;i++) cin>>x>>y,op[x].push_back(y),op[y].push_back(x);
	dfs(1,-1,a[1]);
	cout<<ans<<endl;
}
