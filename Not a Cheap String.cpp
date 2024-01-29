// mes que un club //
#include <bits/stdc++.h>
#define int long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int N = 2e5 + 10;
signed main(){
	io;
	int _; cin>>_;
	while(_--){
		int z[30]={0}; int ans=0;
		string s; int sum; cin>>s>>sum;
		int len=s.length();
		for(int i=0;i<len;i++){ z[s[i]-'a'+1]++; ans+=s[i]-'a'+1; }
		for(int i=26;i>=1;i--){
			while(z[i] && ans>sum){ z[i]--,ans-=i; }}
		for(int i=0;i<len;i++){
			if(z[s[i]-'a'+1]){ cout<<s[i]; z[s[i]-'a'+1]--; }}
    cout<<"\n";
  }
}
