#import<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin>>T;
	while(T--){
		int n,a,b,cnt=0; cin>>n>>a;
		for(int i=2;i<=n;i++){
			cin>>b;
			int x=min(a,b),y=max(a,b);
			while(x*2<y){
				x*=2;
				cnt++;
			}
			a=b;
		}
		cout<<cnt<<'\n';
	}
}
