#include<bits/stdc++.h>
using namespace std;
int main(){
	string a[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
	int n; cin>>n;
	while(n>5){ n=n/2-2; }
	cout<<a[n-1]<<endl;
	return 0;
}
