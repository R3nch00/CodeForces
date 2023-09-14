// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int cnt[1000005];
int main(){
	int t; cin>>t;
	while(t--){
		int x1,p1,x2,p2; cin>>x1>>p1>>x2>>p2;
		double com=log10(x1*1.0/x2)+p1-p2;
		if(com>0) puts(">");
		else if(com==0) puts("=");
		else puts("<");
	}
}
