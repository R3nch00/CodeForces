#include<bits/stdc++.h>
using namespace std;
int t,n,l,r;string c;
int main(){
	cin>>t;
	while(t--){
		l=0; cin>>n>>c;
		r=c.length()-1;
		while(l<r&&c[l]!=c[r]) ++l,--r;
		cout<<r-l+1<<endl;
	}
	return 0;
}
