// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k; cin>>t;
	while (t--){
		cin>>n>>k;
		if(k>n)
			cout<<k-n;
		else if(k%2==n%2)
			cout<<0;
		else
			cout<<1;
		cout<<endl;
	}
	return 0;
}
