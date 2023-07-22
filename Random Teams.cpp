#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,mn,mx;
int c(int x){
	return x*(x-1)/2;
}
signed main(){
	cin>>n>>m;
	mn=(n%m)*c(n/m+1)+(m-n%m)*c(n/m);
	mx=c(n-m+1);
	cout<<mn<<" "<<mx;
	return 0;
}
