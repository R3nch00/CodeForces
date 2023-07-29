#import<bits/stdc++.h>
using namespace std;
int t,n,a,b,c;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		a=sqrt(n);
		b=cbrt(n);
		c=sqrt(cbrt(n));
		cout<<a+b-c<<endl;
	}
}
