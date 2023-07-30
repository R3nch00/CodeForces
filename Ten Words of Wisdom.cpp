#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x,y,ma=0,te=0; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>x>>y;
			if(x<=10){
				if(y>ma)ma=y,te=i;
			}
		}
		cout<<te<<'\n';
		ma=0,te=0;
	}
}
