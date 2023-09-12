// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k,mn=INT_MAX,i=0,j=0,cnt=0; cin>>n>>k;
		string s; cin>>s;
		while (j < n){
			if(s[j] == 'W') ++cnt;
			if((j++-i+1) == k){
				mn = min(mn, cnt);
				if(s[i++] == 'W') --cnt;
			}
		}
		cout << mn << "\n";
	}
	return 0;
}
