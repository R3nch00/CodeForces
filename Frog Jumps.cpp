// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void solve(){
	string s; cin>>s;
	s+="R";
	int mx=0,cnt=0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == 'L')
			cnt++;
		else
			mx = max(mx, cnt), cnt = 0;
	cout << mx + 1 << '\n';
}
void loop(){
	int t; cin>>t;
	while(t--)
		solve();
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	loop();
}
