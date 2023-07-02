#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){ string s; cin>>s;
		for(auto &i:s) i=tolower(i);
		puts(s=="yes"?"YES":"NO"); }
	return 0;}
