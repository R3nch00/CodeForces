#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	int T,n;
	for(cin>>T;T>0;T--){
		cin>>n;
		cout<<(n+1)/3<<' '<<(n+5)/3<<' '<<(n-3)/3<<'\n';
	}
	return 0;
}
