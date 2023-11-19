// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
#define f(m) for(int i=0;i<m;i++)
using namespace std;
signed main(){
	int t; cin>>t;
	while(t--){
		string a; cin>>a;
		int n=a.size(),x=0;
		for(auto it : a) x+=it == '0';
		if(x==0 || x==n){ cout<<a<<endl; }
		else{
			while(n--)cout<<"01";
			cout<<endl;
		}
	}
}
