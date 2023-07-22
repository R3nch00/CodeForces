#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	int t,n,x; cin>>t;
	while(t--){
		cin>>n;
		map<int, int> a={};
		for(int i=0; i<n*2; i++){ cin>>x; a[x]++; if(a[x]==1) cout<<x<<" "; } cout<<"\n";}
	return 0;
}
