// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
void NISH(){
	int n; cin >> n;
	vector<string> g(n);
	int sx = -1, sy = -1, dx = -1, dy = -1;
	for (int i = 0; i < n; i++) {
		cin >> g[i];
		for (int j = 0; j < n; j++) {
			if (g[i][j] == '*') {
				if (sx == -1) {
					sx = i, sy = j;
				} else {
					dx = i, dy = j;
				}
			}
		}
	}
	if (sx == dx){ g[(sx + 1) % n][sy] = g[(dx + 1) % n][dy] = '*'; }
	else if (sy == dy) { g[sx][(sy + 1) % n] = g[dx][(dy + 1) % n] = '*'; }
    else { g[sx][dy] = g[dx][sy] = '*'; }
	for (auto& o : g) {
		cout<<o<<"\n";
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		NISH();
	}
	return 0;
}
