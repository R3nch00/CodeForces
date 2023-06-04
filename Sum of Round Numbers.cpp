#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,T,n; cin>>T;
	while(T--){
		vector<int>v;
		cin>>n;
		int m=10;
		while(n){
		    if(n%m)
		    v.push_back(n%m),n-=n%m;
		    m*=10;
		}
		cout<<v.size()<<"\n";
		for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
	}
}
