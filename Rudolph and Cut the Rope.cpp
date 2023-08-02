#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,a,b,s=0; cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			if(a>b)s++;
		}
		cout<<s<<endl;
	}
	return 0;
}
