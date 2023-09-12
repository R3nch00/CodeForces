// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
void NISHI(){
	string s; cin>>s;
	int ans=INT_MAX;
	for(int i=0; i<s.length(); i++){
		for(int j=i+1; j<s.length(); j++){
			if(((s[i]-'0')*10+(s[j]-'0'))%25==0){
				ans=s.length()-i-2;
			}
		}
	}
	cout<<ans<<endl;
}
int main(){
	int t; cin>>t;
	while(t--) NISHI();
	return 0;
}
