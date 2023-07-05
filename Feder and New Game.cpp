#include <bits/stdc++.h>
using namespace std ;
int main(){
	int a,b,k,p; cin>>a>>b>>k; int arr[b];
	for(int i=0;i<b;i++){ cin>>arr[i]; }
	cin>> p; int m=0,n=0,f=0;
	for(int i=0;i<b;i++) {
        n=arr[i]^p;
		f= __builtin_popcount(n);
		if(f<=k) m++;}
	cout<<m; }
