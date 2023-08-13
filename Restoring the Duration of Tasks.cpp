// mes que un club //
#import <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+3;
int n,a[N],b[N];
void NISHI(){
	cin>>n;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<=n;++i) cin>>b[i], cout<<b[i]-max(b[i-1],a[i])<<' ';
	cout<<'\n';
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int T; cin>>T;
	while(T--) NISHI();
}
