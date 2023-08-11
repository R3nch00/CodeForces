// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int d=2;
		while(n%d) d++;
		cout<<n+d+(k-1)*2<<'\n';
	}
	return 0;
}
