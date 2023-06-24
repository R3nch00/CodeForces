#include <bits/stdc++.h>
using namespace std;
int main(){
int t,n,a; cin>>t;
while(t--){
    int x=0,y=0; cin>>n;
    for(int j=0;j<n;j++){ cin>>a;
    if(j%2 != a%2)j%2==0 ? x++ : y++; }
    if(x==y)cout << x << endl; else puts("-1");
	}
}
