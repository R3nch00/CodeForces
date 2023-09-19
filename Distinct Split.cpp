// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
void NISHI(){
	int n; cin>>n; string s; cin>>s;
	map<char,int>mp,mp2;
	for(auto it:s) mp[it]++;
	int ans=mp.size();
	for(auto it:s){
		ans = max(ans, int(mp.size()+mp2.size()));
		mp[it]--,mp2[it]++;
		if (!mp[it]) mp.erase(it);
	}
	cout<<ans;
}
int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t; cin>>t;
	while (t--) NISHI(),cout<<'\n';
}
