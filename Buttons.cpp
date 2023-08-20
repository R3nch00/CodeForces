// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int T;
int main(){
	cin>>T;
	while(T--){
		int a,b,c; cin>>a>>b>>c;
		puts(a+(c&1)>b ? "First" : "Second");
	}
}
