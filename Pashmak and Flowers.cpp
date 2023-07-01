#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,max=0,min=1e9,k=0,m=0; cin>>n; long long a[n];
	for(long long i=0;i<n;i++){ cin>>a[i];
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];}
    for(long long i=0;i<n;i++){
        if (a[i]==max) k++;
        if (a[i]==min) m++;}
(max==min) ? cout<<0<<" "<<n*(n-1)/2 : cout<<max-min<<" "<<k*m;
	return 0;
}
