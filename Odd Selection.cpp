#import<bits/stdc++.h>
using namespace std;
int i,k,n,t,x,y;
main(){
	for(cin>>t;t--;){ cin>>n>>x;
		for(i=y=0;i++<n;){
			cin>>k; y+=k%2;}
		puts((!y||y==n&&~x&1||x==n&&~y&1) ? "No":"YES");}}
