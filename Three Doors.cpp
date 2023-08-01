#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while (t--){
		int x[4];
		for(int i=0;i<4;i++) cin>>x[i];
		cout<<( !(x[x[0]]) or !(x[x[x[0]]] ) ? "NO\n" : "YES\n");
	}
	return 0;
}
