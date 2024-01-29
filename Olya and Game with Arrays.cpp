// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
void NISHI(){
	int n,m0=INT_MAX,m1=INT_MAX; ll ans=0; cin>>n;
	vector<int> v;
	f(n){ int m; cin>>m;
        for(int i{};i<m;i++){ int x; cin>>x; v.push_back(x); }
          sort(v.begin(), v.end());
          ans+=v[1];
        if(v[1]<m1) m1=v[1];
		m0=min(m0,v[0]);
		v.clear();
	}
  cout<< ans+m0-m1 <<"\n";
 }

int main(){
	io;
	int t; cin>>t;
	while(t--) NISHI();
  return 0;
}
