// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=1;i<=n;i++)
using namespace std;
int T,n,sum; string s;
int main(){
	ios::sync_with_stdio(false);
	cin>>T;
	while(T--){
		cin>>n>>s; sum=0;
		f(n) ((s[i-1]=='+') ? sum++ : sum--);
		cout<<abs(sum)<<endl;
	}
	return 0;
}
