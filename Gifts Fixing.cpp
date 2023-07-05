#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t; cin>>t;
	while(t--){
		int n; cin>>n; ll a[n],b[n]; ll sum=0; ll x=1000000000,y=10000000000;
		for(int i=0;i<n;i++){
			cin>>a[i]; x=min(x,a[i]);}
        for(int i=0;i<n;i++){
            cin>>b[i]; y=min(y,b[i]);}
		for(int i=0;i<n;i++){
			sum+=max(a[i]-x,b[i]-y);}
		cout<<sum;
		puts("");}}
