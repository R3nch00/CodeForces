// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int n,k,t;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		if(n%k==0)cout<<"2\n"<<n-1<<" "<<1<<"\n";
		else cout<<1<<"\n"<<n<<"\n";
	}
}
