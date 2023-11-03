// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
int t; ll a,b,c,d; cin>> t;
	while(t--){
		cin>>a>>b>>c>>d;
		if(a<=b){
			cout<<b<<endl; continue;
		}
		int s=c-d;
		if(a>b&&s<=0){
			cout<<"-1"<<endl; continue;
		}
		ll res=b+((a-b)/s)*c;
		if((a-b)%s>0) res+=c;
		cout<<res<<endl;
	}
}
