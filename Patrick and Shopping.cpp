// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
long long x,y,z; cin>>x>>y>>z;
	if(x<y) swap(x,y);
	z=min(x+y,z);
	cout<<y+z+min(z+y,x);
}
