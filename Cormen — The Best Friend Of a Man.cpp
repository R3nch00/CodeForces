// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int n,k,a[550],x,ans; cin>>n>>k>>a[0];
	for(int i = 1;i < n;i++){
		cin>>a[i];
		x=max(0,k-a[i]-a[i-1]);
		ans+=x; a[i]+=x;
	}
	cout<<ans<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<' '<<endl;
	return 0;
}
