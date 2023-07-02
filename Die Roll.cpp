#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b; cin>>a>>b;
	a=6-max(a,b)+1;
	b=__gcd(6,a);
	cout<<(a/b)<<"/"<<(6/b)<<endl;}
