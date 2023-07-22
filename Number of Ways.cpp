#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,ans=0,x=0;
	cin>>n;vector<int>a(n+1, 0);for(int i=1;i<n+1;i++)cin>>a[i],a[i]+=a[i-1];
	for(int i=1;i<n;i++){if(3*a[i]==2*a[n])ans+=x;if(3*a[i]==a[n])x++;}cout<<ans<<'\n';}
