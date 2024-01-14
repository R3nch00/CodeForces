// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;++i)
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int t; cin>>t;
	while (t--){
		int n,k; cin>>n>>k;
		unordered_set<int> s;
    f(n){ int a; cin>>a; s.insert(a); }
		if(s.size()>k){ cout<<-1<<'\n'; }
            else{
                for(int i{1};i<=n && k%s.size()!=0;++i) { s.insert(i); }
			cout<<s.size()*n<<'\n';
    f(n){ for(int j : s) cout<<j<<' '; }
cout << '\n';
		}
	}
}
