// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
void NI(){
	int n; cin>>n; string s; cin>>s;
	for(int i=1;i<s.size();i++){
		if(s[i]!=s[i-1]){ cout<<i<<" "<<i+1<<"\n"; return; }
	}
	cout<<"-1 -1\n";
}
int main(){
	int t; cin>>t;
	while(t) t--, NI();
}
