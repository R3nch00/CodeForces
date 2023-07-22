#import<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; int n,a[106];
	while(t--){ cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n);
		cout<<a[n]-a[1]<<endl; }
	return 0;
}
