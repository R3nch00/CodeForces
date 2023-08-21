// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(n==3){ cout << -1 << endl; }
		else{
			int i=3;
			while(i<=n){
				cout << i << " ";
				i++;
			}
			cout << 2 << " " << 1 << " ";
			cout << endl;
		}
	}
}
