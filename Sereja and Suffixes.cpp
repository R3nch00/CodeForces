#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin>>n>>m; int x[n];
	for(int i=0;i<n;i++) cin>>x[i]; set<int> y;
	for(int i=n-1;i>=0;i--) {
		if(!y.count(x[i]))
			y.insert(x[i]); x[i]=y.size(); }
	while(m--){ cin>>n; cout<<x[n-1]<<'\n'; }
	return 0;}
