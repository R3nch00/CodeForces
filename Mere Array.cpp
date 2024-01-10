// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;++i)
#define ll long long int
using namespace std;
void NISHI(){
	int n; cin>>n; vector<int> a(n);
	for(int&i:a){ cin>>i; }
	int b=*min_element(a.begin(),a.end());
	vector<int> c(a); sort(c.begin(),c.end());
	f(n){ if(a[i]%b!=0 && a[i]!=c[i]){ cout<<"NO\n"; return; }}
	cout<<"YES\n";
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n; cin>>n;
	while(n--){ NISHI(); }
  return 0;
}
