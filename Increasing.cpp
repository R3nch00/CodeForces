#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x; cin>>t;
	while(t--){ cin>>n; set<int> a;
		for(int i=0;i<n;i++){ cin>>x;a.insert(x);}
		cout<<(a.size()==n ? "YES" : "NO")<<"\n";
	}
	return 0;
}
