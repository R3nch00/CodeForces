// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(i=1;i<=n;i++)
using namespace std;
int main(){
	map<string,int> mp,mpp;
	int n,i,ans=0; cin>>n;
	string a[n+1],ss;
	int b[n+1];
	f(n) { cin>>a[i]>>b[i]; mp[a[i]]+=b[i]; }
	for(auto it:mp) ans=max(ans,it.second);
	f(n) { mpp[a[i]]+=b[i];
		if(mpp[a[i]]>=ans&&mp[a[i]]==ans){ cout<<a[i]; return 0; }
	}
	return 0;
}
