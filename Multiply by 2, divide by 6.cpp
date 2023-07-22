#import<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){ int n; cin>>n; int cs=0;
		while(n%3 == 0){
			if(n%6 == 0) cs ++, n /= 6;
			else cs ++, n *= 2;}
if (n > 1) cs = -1; cout << cs << endl;
	}
}
