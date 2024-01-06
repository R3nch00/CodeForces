// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
ll a[200000];
int main(int argc, char** argv){
ios::sync_with_stdio(false),cin.tie(0);
	int T,n; cin>>T;
	while(T--){ cin>>n;
	f(n) cin>>a[i]; sort(a,a+n);
    cout<<max(a[0]*a[1],a[n-1]*a[n-2])<<'\n';
	}
	return 0;
}
