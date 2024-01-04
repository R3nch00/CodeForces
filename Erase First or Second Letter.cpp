// mes que un club //
#include <bits/stdc++.h>
using namespace std;
void NISHI(){
	set<char> st;
	int n; cin>>n;
	string s; cin>>s;
	int ans=0;
	for(int i=0;s[i];i++){
		if(!st.count(s[i])){
			ans+=n-i;
			st.insert(s[i]);
		}
	}
	cout<<ans<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		NISHI();
	}
}
