#include <bits/stdc++.h>
using namespace std;
int main(void){
	int t; cin>>t;
	while (t--) {
		int n; cin>>n;
		int i=1;
		if(n%2){
			cout<<"3 1 2";
			i=4;
		}
		for(;i<=n;i+=2)
			cout<<i+1<<" "<<i<<" ";
		cout<<'\n';
	}
}
