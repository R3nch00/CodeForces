// mes que un club //
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define int long long
#define ve vector
#define ar array
#define pb push_back
#define f(n) for(int i{};i<n;i++)
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
signed main(){
	int a,b; cin>>a>>b;
	cout<<(a+b == 2 ? 0 : a+b-2-!((a-b)%3));
  return 0;
}
