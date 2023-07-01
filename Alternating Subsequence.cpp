#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long n,x,a,ans=0; cin>>n>>x;
		for(int i =1;i<n;i++){
			cin>>a;
			if(a*x<0){ ans+= x; x=a;}
			else x=max(a, x); }
		ans+=x;
		cout<<ans<<"\n";}
	return 0;
}
