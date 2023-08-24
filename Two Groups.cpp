// mes que un club //
#import <bits/stdc++.h>
using namespace std;
long m,t;
int main(){
	cin>>t;
	for(int i=1;i<=t;i++){
		long long ans=0;
		cin>>m;
		for(int j=1;j<=m;j++){
			long long x; cin>>x; ans+=x;
		}
		cout<<abs(ans)<<endl;
	}
}
