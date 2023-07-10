#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	for(cin>>t;t--;){
		string x; cin >> x;
		int dig=x[0]-'0'-1,len=x.size();
		cout<<dig*10+len*(len+1)/2<<endl;}}
