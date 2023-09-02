// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int x,y; cin>>x>>y;
		int k=x*x+y*y;
		int l=sqrt(k);
		if(x==0&&y==0)
		 cout<<"0"<<endl;
		else if(l*l==k)
		  cout<<"1"<<endl;
		else
		  cout<<"2"<<endl;
	}
}
