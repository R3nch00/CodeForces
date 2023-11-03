// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t,k,n,m,q; cin>>t;
	while(t--){
		cin>>n>>k;
		q=1;m=n;
		while(m%2==0){
			q*=2;
			m/=2;
		}
		if(m==1)
			q/=2;
		cout<<q<<" "<<(n-q)/2<<" "<<((n-q)/2)<<"\n";
	}
	return 0;
}
