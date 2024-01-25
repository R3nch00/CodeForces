// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int t,n,m;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m;
		string s(m,'B');
		while(n--){
			int x; cin>>x; x--;
			x=min(x,m-x-1);
        s[x]=(s[x]=='B') ? 'A' : s[m-x-1]='A'; }
    cout<<s<<endl;
  }
	return 0;
}
