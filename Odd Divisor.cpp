#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		puts(((n & (n-1))==0) ? "NO":"YES");}}
