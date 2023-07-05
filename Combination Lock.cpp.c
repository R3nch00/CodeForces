#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
ll n,ans=0; cin>>n; string a,b; cin>>a>>b;
	for(int i=0; i<n; i++){
		int x=abs(a[i]-b[i]);
		x=min(x, 10-x);
		ans+=x;}
	cout<<ans;
}
