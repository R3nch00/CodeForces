#include<bits/stdc++.h>
using namespace std;
int main(){
	int test; cin>>test;
	while(test--){
		int n; cin>>n; int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		string out="YES";
		for(int i=0;i<n;i++){
			if((a[i]%2)!=(a[i%2]%2))out="NO";
		}
		cout<<out<<"\n";
	}
	return 0;
}
