// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=1;i<=n;i++)
int a=0,b=0,t,n;
using namespace std;
int main(){
	cin>>t;
	while(t--){
		cin>>n; b=0; // Reset b for each test case
		f(n){ cin>>a; if(++b==a) b++; }
		cout<<b<<endl;
    }
    return 0;
}
