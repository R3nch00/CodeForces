// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main() {
	ios_base::sync_with_stdio(0),cin.tie(0);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int frq[2]{};
		for(auto i:s){ frq[i - '0']++; }
		int cnt=s.size();
		for(auto i:s){
			if(!frq[!(i-'0')]){ break; }
			frq[!(i-'0')]--;
			cnt--;
		}
		cout<<cnt<<'\n';
	}
	return 0;
}
