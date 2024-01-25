// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(t) for(int i{};i<n;i++)
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> vec(10*n+1);
		int cur=n; ll res=0; vec[cur]++;
    f(n){
        char a; cin>>a;
        cur += a-1-48; res += vec[cur]++;
		}
      cout<<res<<"\n";
	}
  return 0;
}
