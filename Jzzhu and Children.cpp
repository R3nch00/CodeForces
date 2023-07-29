#include <bits/stdc++.h>
using namespace std;
int n,m,ans; double a,last=0;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(ceil(a/m)>=last){
			ans=i;
			last=ceil(a/m);
		}
	}
	cout<<ans;
	return 0;
}
