// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int t,n,a,b,c,x,y,ans;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		a=b=c=1e9+7;
		for(int i=0;i<n;i++){
			cin>>x>>y;
			if(y==1) a=a>x ? x : a;
			if(y==10) b=b>x ? x : b;
			if(y==11) c=c>x ? x : c;
		}
		ans=a+b>c ? c : a+b;
		if(ans>1e9) cout<<("-1\n"); else cout<<ans<<"\n";
	}
}
