#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,i,j,n,k; cin>>t;
	while(t--){ int sum=0; cin>>n>>k; int a[n],b[n];
		for(i=0;i<n;i++){ cin>>a[i]; }
		for(i=0;i<n;i++){ cin>>b[i]; }
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		for(i=0;i<n;i++){
			(i<k &&(a[i]<b[i])) ? sum+=b[i] : sum+=a[i];}
		cout<<sum<<endl; }}
