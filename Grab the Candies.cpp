#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t--){ cin>>n;
		int x,o=0,e=0;
		for(int i=0;i<n;i++){ cin>>x;
        (x%2) ? o+=x : e+=x;}
cout<<(e>o ? "YES" : "NO")<<"\n";}}
