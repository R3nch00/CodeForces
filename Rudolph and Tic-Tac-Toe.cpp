// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void NISHI(){
	vector<char> c(9);
	for (int i = 0; i < 9; i++) {cin >> c[i];}
	vector<vector<int>> win = { {0,1,2}, {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, {2,5,8}, {0,4,8}, {2,4,6} };
	for (auto i : win) {
		if (c[i[0]] == c[i[1]] && c[i[0]] == c[i[2]] && c[i[0]]!='.') {
			cout << c[i[0]] << "\n";
			return;
		}
	}
	cout<<"DRAW\n";
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	long long t = 1; cin >> t;
	while(t--){
		NISHI();
	}
}
