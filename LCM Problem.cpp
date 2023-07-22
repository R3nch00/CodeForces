#include<bits/stdc++.h>
#define nl '\n'
using namespace std;
void solve(){
	int a, b; cin>>a>>b;
	if(2*a<=b){ cout<<a<<' '<<2*a<<nl; }
	else{ cout<<-1<<' '<<-1<<nl; }
}
int main(){
        int t=1; cin>>t;
        while(t--){solve();}
        return 0;
}
