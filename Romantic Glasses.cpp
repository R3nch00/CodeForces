// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int Q=1; cin>>Q;
	while(Q--){
		int n; cin>>n; int a[n];
		f(n) { cin>>a[i]; }
		ll p=0;
		set<ll> st;
		char ok=0;
		f(n){
			p+=(i%2 ? -a[i] : a[i]);
			if(st.count(p)||p==0) ok=1;
                st.insert(p);
		}
		cout<<(ok ? "YES" : "NO")<<"\n";
	}
	return 0;
}
