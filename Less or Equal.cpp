#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int x,k; cin>>x>>k; int a[x];
	for(int i=0;i<x;i++)cin>>a[i];
	sort(a,a+x);
	if(k==0)cout<<(a[0]!=1?1:-1);
	else if(k==x)cout<<1000000000;
	else cout<<(a[k-1]!=a[k]?a[k-1]:-1);
	return 0;
}
