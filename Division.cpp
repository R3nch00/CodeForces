#include <bits/stdc++.h>
#define int long long
using namespace std;
int T, n;
signed main(){
	cin>>T;
	while (T--){cin>>n;
		cout<<"Division ";
		if (1900 <= n) cout << "1\n";
		else if (1600 <= n && n <= 1899) cout << "2\n";
		else if (1400 <= n && n <= 1599) cout << "3\n";
		else cout << "4\n";}
}
