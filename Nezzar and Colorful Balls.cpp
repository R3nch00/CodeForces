// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int b[200]={0};
		int n,x=0,a=0; cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		b[x]++;
		a=max(b[x],a);
	}
	cout<<a<<endl;
	}
	return 0;
}
