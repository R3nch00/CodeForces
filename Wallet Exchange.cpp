// mes que un club //
#include <bits/stdc++.h>
using namespace std;
int t,a,b;
int main(){
	cin>>t;
	while(t--){ cin>>a>>b; puts((a+b&1)==0 ? "Bob" : "Alice"); }
	return 0;
}
