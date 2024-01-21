// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int T; cin>>T;
	for(;T--;){
		int n,in=0,out=0; string S,T; cin>>n>>S>>T;
		f(n) if(S[i]!=T[i]){ (S[i]=='1') ? out++ : in++; }
  cout<<max(out,in)<<"\n";
	}
}
