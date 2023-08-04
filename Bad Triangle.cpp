#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t,n,a[500500]; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		if(a[1]+a[2]>a[n]) cout<<"-1 "<<endl;
		else cout<<"1 2 "<<n<<endl;
	}
	return 0;
}
