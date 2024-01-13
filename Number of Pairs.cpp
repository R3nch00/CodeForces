// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n,l,r; cin>>n>>l>>r; int a[n];
		f(n){ cin>>a[i]; }
		sort(a, a+n); ll ans=0;
		f(n)
			ans+=(upper_bound(a,a+i,r-a[i])-a)-(lower_bound(a,a+i,l-a[i])-a);
		cout<<ans<<endl;
	}
	return 0;
}
