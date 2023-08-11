// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int n,x,ans=0;cin>>n;
	map<int,int> mp;
	while(n--) cin>>x, ans=max(ans,++mp[x]);
	cout<<ans;
}
