#include <bits/stdc++.h>
using namespace std;
int n,i,so; string s;
int main(){
	cin>>n>>s;
	while(i<s.size()){
		so++;
		cout<<s[i];
		i+=so;
	}
}
