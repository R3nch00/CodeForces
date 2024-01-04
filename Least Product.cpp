// mes que un club //
#include <bits/stdc++.h>
using namespace std;
void NISHI(){
	int n; cin>>n;
	int e = 0;
	while(n--){
		int a; cin>>a;
		if(!a) e=-1e9;
		if(a<0) e++;
	}
	cout<<((e<0||(e&1)) ? "0\n":"1\n1 0\n");
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t; cin>>t;
	while(t--) NISHI();
}
