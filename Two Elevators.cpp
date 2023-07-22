#include <bits/stdc++.h>
using namespace std;
int t,a,b,c;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		int x=abs(a-1),y=abs(b-c)+(c-1);
		if(x<y) puts("1");
		else if(x>y) puts("2");
		else puts("3");
	}
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c; bcin>>t;
	while(t--){cin>>a>>b>>c;
		if(c>b) b=2*c-b;
		cout<<(a==b? 3 : (a>b)+1)<<endl;
	}
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int t,a,b,c;
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(a<abs(c-b)+c) cout<<1;
		else if(a==abs(c-b)+c) cout<<3;
		else cout<<2;
		cout<<"\n";
	}
	return 0;
}
*/
