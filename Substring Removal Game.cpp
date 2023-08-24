// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int i, k, m, t, z, p[60];
string s;
int main(){
	for (cin >> t; t--;) { cin >> s;
		for (i = k = m = z = 0; s[i]; i++) {
			if (s[i] & 1) k++;
			else if (k) {  p[m++] = k; k = 0; }
		}
		p[m++]=k; sort(p, p + m);
		for (i = m - 1; i > -1; i -= 2)z += p[i];
		cout << z << endl;
	}
}
