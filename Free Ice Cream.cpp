#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,a=0,b=0; cin>>n>>b;
	while(n--){
		char y; long long x; cin>>y>>x;
		if(y=='+') b+=x;
		else if(x>b) a++;
		else b-=x;
	}
	cout<<b<<" "<<a;
}
