// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
using namespace std;
int NISHI(int x,int y){
	if(y==x) return 1;
	if(y>x) return 0;
	if(y%2==1) return NISHI(x,3*y);
	return NISHI(x,3*y/2)+NISHI(x,3*y);
  }
int main(){
	int t; cin>>t;
	while(t--){
		int m,n; cin>>m>>n;
    puts(NISHI(m,n) ? "YES" : "NO");
  }
	return 0;
}
