// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    ll n,sum=0; cin>>n;
	while(n>=2){ sum+=n; n=n/2; }
cout<<sum+1<<endl;
	}
}
