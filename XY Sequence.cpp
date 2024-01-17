// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<=n;i++)
using namespace std;
int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int t,n,b,x,y,a; ll s; cin>>t;
	while(t--){
		cin>>n>>b>>x>>y; s=a=0;
		while(n--){ (a+x>b) ? (a-=y,s+=a) : (a+=x,s+=a); }
      cout<<s<<endl;
  }
}
