// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k; cin>>t;
	while (t--){
		cin>>n>>k;
		cout<<((k>n) ? k-n : (k%2==n%2) ? 0 : 1)<<endl;
	}
	return 0;
}

