// mes que un club //
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; char c; cin>>n;
	while(n--){
		map<char,int>mp;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>c;
				mp[c]++;
			}
		}
		for(auto x:mp)
			if(x.second==2) cout<<x.first<<endl;
	}
	return 0;
}
