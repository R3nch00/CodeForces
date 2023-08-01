#import <bits/stdc++.h>
using namespace std;
long long t,i,j,n,m,k,a[1001],b[1001];
int main(){
	cin>>t;
	for(k=1;k<=t;k=k+1){
		cin>>n>>m;
		for(i=1;i<=n;i=i+1)cin>>a[i];
		for(i=1;i<=n;i=i+1)cin>>b[i];
		for(i=1;i<=n;i=i+1)
		for(j=1;j<n;j=j+1)
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
			swap(b[j],b[j+1]);
		}
		for(i=1;i<=n;i=i+1)if(m>=a[i])m=m+b[i];
		cout<<m<<endl;
	}
	return 0;
}
