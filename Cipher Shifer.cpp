#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; string s; cin>>n>>s; int k=0;
		for(int i=1;i<n;i++){
			if(s[k]==s[i]){
				cout<<s[k];
				k=i+1;
				i++;
			}
		}
		cout<<endl;
	}
	return 0;
 }
