#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n,a; cin>>t;
	while(t--){
		cin>>n;
		int sum=0;
		while(n--){
			cin>>a;
			if(a==1||a==3)
				sum++;
		}
		cout<<sum<<'\n';
	}
	return 0;
}
