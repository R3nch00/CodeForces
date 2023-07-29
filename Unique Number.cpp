#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
		int n,a=0,p=1; cin>> n;
		for(int i=9;i;i--)
            if(n>=i) n-=i,a+=p*i,p*=10;
		if(n) cout<< -1<<'\n';
		else cout<< a<< endl;
	}
	return 0;
}
