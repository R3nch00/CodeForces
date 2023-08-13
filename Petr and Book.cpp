// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int i,n,w[7];
int main(){
	for(cin>>n;i<7;) cin>>w[i++];
	for(i=6;n>0;) n-=w[++i%=7];
	cout<<i+1;
}
