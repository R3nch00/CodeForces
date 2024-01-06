// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=1;i<=n;i++)
using namespace std;
int n,a[100005];
int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	f(n) cin>>a[i];
	cout<<(n-1)/2<<'\n';
	sort(a+1,a+n+1);
	for(int i=1;i<=n/2;i++){ cout<<a[i+n/2]<<' '<<a[i]<<' '; }
	if(n%2==1) cout<<a[n];
	return 0;
}
