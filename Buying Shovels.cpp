#include <bits/stdc++.h>
using namespace std;
int main(){
	int q,n,k; cin>>q;
	while(q--){
	    cin>>n>>k;
	    int x=n;
	    for(int j=1;j<=sqrt(n);j++){
			if(n%j==0){
				if(j<=k) x=min(x,n/j);
				if(n/j<=k) x=min(x,j);
			}
		}
		cout<<x<<endl;
	}
	return 0;
}
