// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main() {
	int a[100001]={},i,j,u=0,n; cin >> n;
	for (i = 1; i++ < n;) {
		if (a[i] == 0)
			for (j = i; j <= n; j += i)
				a[j]++;
		if (a[i] == 2)
			u++;
	}
	cout << u;
}
