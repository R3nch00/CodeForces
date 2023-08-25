// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t,n; cin>>t;
	while(t--){
		int b=0,v=3;cin>>n;
		while (n--){
			if(v==3||v==1) cout<<9, v--;
			else if(v==2) cout<<8, v--;
			else if(v==0){ cout<<b++;
			if(b==10) b=0; }
		}
		cout<<'\n';
	}
}
