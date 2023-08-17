// mes que un club //
#import <bits/stdc++.h>
using namespace std;
bool check(int x){
	for(int i=2;i*i<=x;i++) if(x%i==0) return 0;
	return 1;
}
int t,d,d1,d2;
int main(){
	cin>>t;
	while(t){
		t--; cin>>d;
		for(int i=d+1;;i++)
			if(check(i)){d1=i;break;}
		for(int i=d1+d;;i++)
			if(check(i)){d2=i;break;}
		cout<<d1*d2<<endl;
	}
	return 0;
}
