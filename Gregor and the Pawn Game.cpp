// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n; string a,b; cin>>n>>a>>b;
		int ans=0;
		a=' '+a+' ',b=' '+b+' ';
		for(int i=1;i<=n;i++){
			if(b[i]=='0') continue;
			if(a[i]=='0') ans++;
			else if(a[i-1]=='1') ans++,a[i-1]='2';
			else if(a[i+1]=='1') ans++,a[i+1]='2';
		}
		cout<<ans<<"\n";
	}
}
