// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main() {
	int t,n,m; cin>>t;
	while (t--) {
        cin>>n>>m;
		string x,s; cin>>x>>s;
		bool ok = false;
		f(6){
			if(x.find(s)!=-1) {
				ok = true;
				cout<<i<<endl;
				break;
			}
			x+=x; // Update the being searched value of x
		}
		if(!ok) cout<<-1<<endl;
	}
}
