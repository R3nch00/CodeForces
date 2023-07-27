#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
int t,a,b,c; cin>>t;
	while(t--){
		cin>>a>>b>>c;
		int n=(max(a,b)-min(a,b))*2;
		if(n>=a&&n>=b&&n>=c){
			if(c+n/2<=n)
				cout<<c+n/2<<'\n';
			else
				cout<<c-n/2<<'\n';
		}else
			cout<<"-1\n";
	}
	return 0;
}
