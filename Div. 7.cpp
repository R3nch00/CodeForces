#include<bits/stdc++.h>
using namespace std;
int main(){
	int p; cin>>p;
	while(p-->0){
		int n; cin>>n;
		int l=n%10,m=n%7;
		cout<< (l>=m ? n-m : n+7-m) <<endl;
	}
}
