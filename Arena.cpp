// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void NISH(){
	int n; cin>>n; int a[n+1];
	map<int,int>mp;
	for(int i=0;i<n;i++){ cin>>a[i]; mp[a[i]]++; }
	sort(a,a+n);
	cout<<abs(mp[a[0]]-n)<<endl;
}
signed main(){
	int t; cin>>t;
	while(t--){
		NISH();
	}
}
