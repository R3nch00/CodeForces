// mes que un club //
#include <bits/stdc++.h>
using namespace std;
void NISHI(){
	int a,b; cin>>a>>b;
	int n=a/__gcd(a,b)*b;
	cout<<(n>b ? n : n/a*b)<<"\n";
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int t; cin>>t;
	while(t--) NISHI();
	return 0;
}
