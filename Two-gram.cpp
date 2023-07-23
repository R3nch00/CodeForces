#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n,k=0,l=0; char a[1000],b,c; cin>>n; cin>>a;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]==a[i]&&a[j+1]==a[i+1]) l++;
		}
		if(l>k){ b=a[i]; c=a[i+1]; k=l; }
		l=0;
	}
		cout<<b<<c;
}
