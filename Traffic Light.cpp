// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(m) for(int i{};i<m;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    io;
    int T; cin>>T;
	while (T--){
		int n,m,i,j,res=0; char c; string s; cin>>n>>c; cin>>s; s+=s;
		int lst=1e9;
		for(i=n*2-1;i>=0;i--){
			if(s[i]=='g'){ lst=i; }
          res=(i<n && c==s[i]) ? max(res,lst-i) : res;
		}
    cout<<res<<'\n';
  }
}
