#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int q; cin>>q;
	while(q--){
		ll a,b,k; cin>>a>>b>>k;
		ll cnt;
		cnt=(a-b)*(k/2)+(k%2)*a;
		cout<<cnt<<endl;
	}
 }
