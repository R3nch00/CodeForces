// mes que un club //
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ar array
#define ve vector
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll i,j,k,n,m,t;
using namespace __gnu_pbds;
int main(){
	io;
	cin>>t;
	while(t--){
		cin>>n;
		vector<pair<ll,ll> > v;
		tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> s;
    while(n--){ cin>>j>>k; v.push_back({j,k}); }
		sort(v.begin(),v.end()); k=0;
    for(auto[x,y]:v){ k+=s.size()-s.order_of_key(y); s.insert(y); }
		cout<<k<<'\n';
	}
}
