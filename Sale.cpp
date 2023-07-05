#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k; cin>>n>>k; long a[n+1],s=0;
	for(int i=1;i<=n;i++) cin>>a[i]; sort(a+1,a+1+n);
	for(int i=1;i<=k;i++) if (a[i]<0) s-=a[i];
	cout<<s;
}
