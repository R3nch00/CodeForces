#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n,b,d; cin>>n>>b>>d;
	int ans=0,cnt=0;
	while(n--){
		int a; cin>>a;
		if(a>b) continue;
		cnt+=a;
		if(cnt>d){ cnt=0;++ans; }
	}
	cout<<ans;
}
