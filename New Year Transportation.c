#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t,j=1; cin>>n>>t; int a[n];
for(int i=1;i<n;i++) cin>>a[i];
for(j=1;j<t;j=j+a[j]) ;
cout<<(j==t ? "YES" : "NO")<<endl;
	return 0;
}
