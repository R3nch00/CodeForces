// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
using namespace std;
inline void NISHI(){
	int n,x,y,d1=0,d2=0,d3=0,d4=0; cin>>n;
	f(n){ cin>>x>>y;
		d1 |= (x<0) ? 1 : 0;
        d2 |= (x>0) ? 1 : 0;
        d3 |= (y<0) ? 1 : 0;
        d4 |= (y>0) ? 1 : 0;
	}
	cout<<(d1+d2+d3+d4<=3 ? "YES\n" : "NO\n");
  }
int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int n; cin>>n;
	while(n--) NISHI();
	return 0;
}
