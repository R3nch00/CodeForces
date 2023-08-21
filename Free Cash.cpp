// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int n,maxx = 0;
int main(){
	cin.tie(0) -> sync_with_stdio(0);
	cin>>n;
	map<int, int> cnt;
	while (n--){
		int h,m; cin>>h>>m;
		maxx=max(maxx,++cnt[h*60+m]);
	}
	return cout<<maxx,0;
}
