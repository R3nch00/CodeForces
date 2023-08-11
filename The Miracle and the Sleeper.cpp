// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	ios::sync_with_stdio(0);
	cin.tie();
	int t; cin>>t;
	while(t--){
		ll a,b; cin>>a>>b;
		if(b<a*2){ cout<<b-a<<"\n"; }
		else cout<<(b-1)/2<<"\n";
	}
}
