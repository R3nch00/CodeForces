#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int i,j,k,n,m,t,a[666666];
int main() {
	ios::sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>n;
		for(i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);
		cout<<((a[n]>a[n-1]+1) ? "NO\n" : "YES\n");
    }
}
