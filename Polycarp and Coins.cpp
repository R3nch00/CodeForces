#include <bits/stdc++.h>
using namespace std;
signed main(){
int z; long long n,a,b; cin>>z;
	while(z--){ cin>>n;
		a=(n+1)/3; b=n-(2*a);
		cout<<b<<" "<<a<<endl;
	}
	return 0;
}
