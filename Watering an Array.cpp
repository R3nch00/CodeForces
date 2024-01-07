// mes que un club //
#include <bits/stdc++.h>
using namespace std;
int n,t,k,d,ans,a[2005],v[100005];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0),cin>>t;
	while(t--){
		cin>>n>>k>>d,ans=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=0;i<k;i++) cin>>v[i];
		for(int i=0,cnt=0;i<=2*n&&i<d;i++,cnt=0){
        for(int j=1;j<=n;j++)
            if(a[j]==j) cnt++; ans=max(ans,cnt+((d-i-1)>>1));
        for(int j=1;j<=v[i%k];j++) a[j]++;
        }
		cout<<ans<<'\n';
	}
	return 0;
}
