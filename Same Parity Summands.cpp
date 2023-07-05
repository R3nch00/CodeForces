#include<bits/stdc++.h>
using namespace std;
int main(){
int t; cin>>t;
	while(t--){
		int x,y,z,a; cin>>x>>y; a=y-1; z=a;
		if(x%2 == 0 && x >= 2*y){ cout<<"YES\n";
			while(z--){ cout<<2<<" "; }
			cout<<x-(2*a); }
		else if(x % 2 != a % 2&&x>=y) { cout<<"YES\n";
			while(z--){ cout<<1<< " "; }
			cout<<x - a; }
		else cout<<"NO";
		cout << "\n"; }}
