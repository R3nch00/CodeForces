// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
		string s,t; cin>>s>>t;
		s+=t;
		cout<< set<char>(s.begin(),s.end()).size()-1 <<endl;
	}
}
