// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int n; cin>>n;
	for(int i=1;i<=n;i+=1){
		int m,k,cnt=0; string s; cin>>m>>k>>s;
		for(int j=0;j<=m-1;j+=1) if(s[j]=='B') cnt++,j+=k-1;
		cout<<cnt<<endl;
	}
}
