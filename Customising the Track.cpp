// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n;
int main(){
	io;
	int T; cin>>T;
	while(T--){
        ll sum=0; cin>>n;
		f(n){ int x; cin>>x; sum+=x; }
		sum %= n;
		cout<< sum*(n-sum) <<"\n";
	}
}
