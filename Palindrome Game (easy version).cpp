// mes que un club //
#include <bits/stdc++.h>
using namespace std;
int main(){
	int T; cin>>T;
	while(T--){
		 int n,sum=0; string a; cin>>n>>a;
		 for(int i=0;i<a.size();i++){
		 	if(a[i]=='0')
		 	sum++;
		 }
cout<<((sum==1||sum%2==0) ? "BOB\n":"ALICE\n");
	}
}
