// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll t,n,a,b,c,x,y,z;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>a>>b>>c;
		x=n%a; y=n%b; z=n%c;
		if(x!=0) x=a-x;
		if(y!=0) y=b-y;
		if(z!=0) z=c-z;
		cout<<min({x,y,z})<<endl;
	}
  return 0;
}
