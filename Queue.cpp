// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false), cin.tie(0);
	ll n,t=0ll,ans=0ll; cin>>n; ll a[n];
	f(n) cin>>a[i]; sort(a,a+n);
	f(n){ if(t<=a[i]) { ans++; t+=a[i]; }}
  cout<<ans;
}
