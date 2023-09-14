// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,t,a,b; string s; cin>>n>>t>>s;
	int x[n+1]; x[0]=0;
	for(int i=1;i<=n;i++)
		x[i]=x[i-1]+s[i-1]-'a'+1;
	while(t--){
		cin>>a>>b; cout<<x[b]-x[a-1]<<'\n';
	}
	return 0;
}
