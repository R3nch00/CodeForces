// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int nb=0,nB=0; string s,ans; cin>>s;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='b') nb++;
            else if(s[i]=='B') nB++;
			else{
				if(s[i]<'a' && nB) nB--;
				else if(s[i]>='a' && nb) nb--;
				else ans += s[i];
			}
		}
		reverse(ans.begin(),ans.end());
		cout<<ans<<endl;
	}
	return 0;
}
