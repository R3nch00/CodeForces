// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
#define f(m) for(int i=0;i<m;i++)
using namespace std;
signed main(){
	cin.tie(0); cin.sync_with_stdio(0); cout.tie(0);
	int t; cin>>t;
	while(t--){ string s; cin>>s;
	sort(s.begin(),s.end());
	if (s[0]==s[3]) cout<<"-1\n";
	else if(s[1]==s[3] || s[0]==s[2]) cout<<"6\n";
	else cout<<"4\n";
	}
	return 0;
}
