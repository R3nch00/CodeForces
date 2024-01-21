// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL); cin.tie(nullptr);
    int t; ll n,m; cin>>t;
	while(t--){
		cin>>n>>m;
		cout<< (m+1)*m/2+(m+m*n)*n/2-m <<"\n"; }
  return 0;
}
