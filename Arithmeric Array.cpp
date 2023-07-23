#include<bits/stdc++.h>
using namespace std;
int t,n,a,s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--){ cin>>n; s=0;
		for(int i=1;i<=n;i++){ cin>>a; s+=a; }
		cout<<(s<n ? 1 : s-n)<<"\n";
	}
	return 0;
}
