// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=1;i<=n;++i)
using namespace std;
int main(){
    int T,n,m,a,flag; cin>>T;
	while(T--){
		cin>>n>>m; flag=0;
		f(n) cin>>a, flag=(a==m) ? 1: flag;
		cout<<( flag ? "YES\n" : "NO\n");
	}
}
