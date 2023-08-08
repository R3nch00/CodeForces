// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int b[3];
int main(){
	int n,x; cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		b[i%3]+=x;
	}
	int m=max(max(b[0],b[1]),b[2]);
	if(m==b[0]) cout<<"chest";
	else if(m==b[1]) cout<<"biceps";
	else cout<<"back";
}
