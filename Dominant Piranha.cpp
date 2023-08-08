// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,a[300030]; cin>>t;
	while (t--){
		cin>>n;
		for(int i = 1; i <= n; i++) cin>>a[i];
		a[0]=a[1];
		a[n+1]=a[n];
		int ans=-1,max=0;
		for (int i = 1; i <= n; i++)
			if (a[i] > max && (a[i] > a[i - 1] || a[i] > a[i + 1])) {
				ans = i;
				max = a[i];
			}
		cout<<ans<<endl;
	}
}
