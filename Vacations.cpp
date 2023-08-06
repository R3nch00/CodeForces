// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int n,x,p=3,ans;
int main() {
	cin>>n;
	for(int i=1;i<=n;i++){ cin>>x;
		if(x==0||(x==p && x!=3))ans++,p=0;
		else
		p=(x==3)? 3-p : x; }
	cout<<ans;
}
