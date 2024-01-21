// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int x[4],y[4];
		for(int i=0;i<4;i++){ cin>>x[i]>>y[i]; }
		int q=max(abs(x[0]-x[1]),abs(y[0]-y[1]));
		cout<<q*q<<endl;
	}
}
