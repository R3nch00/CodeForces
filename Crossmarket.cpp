// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,m,sum; cin>>n>>m;
		sum=(min(n,m)+n+m-2);
		cout<<((n==m &&n==1) ? 0 : sum)<<endl;
    }
}
