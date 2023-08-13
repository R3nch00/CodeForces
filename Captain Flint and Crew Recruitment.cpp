// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void NISH(int n){
	if(n<31) cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		int tmp=n-30;
		if(tmp==6||tmp==10||tmp==14) cout<<"6 10 15 "<<tmp-1<<endl;
		else cout<<"6 10 14 "<<tmp<<endl;
	}
}
int main(){
	int n,t; cin>>t;
	while(t--) cin>>n,NISH(n);
}
