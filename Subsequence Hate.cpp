// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int sum[1100];
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int n=s.size(),ans=n;
		f(n){ sum[i+1]=sum[i]+s[i]-'0'; }
		for(int i=0;i<=n;i++){
			int p=min(sum[i]+n-i-sum[n]+sum[i],i-sum[i]+sum[n]-sum[i]);
			ans=min(p,ans); }
		cout<<ans<<endl;
	}
	return 0;
}
