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
	int n; char a; cin>>n;
	while(n--){
		int c=0,i=4; char f='1';
    while(i--){
        cin>>a;
        if(a=='0'){ a='9'+1; }
			c+=abs(a-f)+1;
			f=a;
		}
      cout<<c<<endl;
	}
  return 0;
}
