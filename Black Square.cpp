#include <bits/stdc++.h>
using namespace std;
int x,a[5]; string s;
int main(){
	cin>>a[1]>>a[2]>>a[3]>>a[4]>>s;
	for(int i=0;i< s.size();i++){ x += a[s[i]-48]; }
	cout<<x<<endl;}
