#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,i,a,b,n; cin>>t;
	while(t--){
		i=0; cin>>a>>b>>n;
		while(a<=n&&b<=n){
			a<b ? a+=b : b+=a; i++;
		}
		cout<<i<<endl;
	}
	return 0;
}
