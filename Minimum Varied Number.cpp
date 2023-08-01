#include<bits/stdc++.h>
using namespace std;
int s,n;
int main(){
	int t; cin>>t;
	while(t--){
		n=0; cin>>s;
    for(int i=9,x=1;i;i--)
        if(s>=i)
            s-=i,n=n+x*i,x*=10;
        cout<<n<<endl;
	}
	return 0;
}
