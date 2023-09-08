// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int T, X;
	for(cin >> T; T; T--){
		cin >> X;
		if(X%2) cout<< -1 <<endl;
		else cout<<"0 0 "<<X/2<<endl;
	}
}
