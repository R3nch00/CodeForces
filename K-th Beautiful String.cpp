#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; long long k; cin>>n>>k;
		long long l=1;
		while(l<k){
			k-=l;
			l++;
		}
		for(int i=0;i<n;i++){
			if(i==n-l-1||i==n-k){
				cout<<"b";
			}
			else{
				cout<<"a";
			}
		}
		cout<<endl;
	}
	return 0;
}
