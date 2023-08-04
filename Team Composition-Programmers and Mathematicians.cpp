// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t,a, b;cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<min(((a+b)/4), min(a, b))<<"\n";
	}
}
