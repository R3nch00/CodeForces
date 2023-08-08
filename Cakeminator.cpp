// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int r,c,ans;
bool row[11],col[11];
string s;
int main(){
	cin>>r>>c;
	for(int i = 0; i < r; i++){ cin>>s;
		for(int j = 0; j < c; j++){
			if (s[j] == 'S'){
				row[i] = true;
				col[j] = true;
			}
		}
	}
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			if (!row[i] || !col[j]){
				ans++;
			}
		}
	}
	cout <<ans<<endl;
	return 0;
}
