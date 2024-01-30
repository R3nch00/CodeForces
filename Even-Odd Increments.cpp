// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
	int n,q,e; ll sm=0,odd=0,even=0; cin>>n>>q;
	f(n) cin>>e,sm+=e,
		++(e%2 ? odd : even);
	while(q--){
		ll t,x; cin>>t>>x;
		if(t==1){
			sm += x*odd;
			if(x%2) even=n,odd=0; }
		if(t==0){
			sm += x*even;
			if(x%2) odd=n,even=0; }
		cout<<sm<<'\n';
	}
}
int main(){
	io;
	int f; cin>>f;
	while(f--) NISHI();
}
