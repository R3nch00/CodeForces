// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	int a,b,c,n; string s; cin>>n;
	while(cin>>n>>s){
		a=b=c=1;
		f(n){ (s[i-1]==s[i]) ? c++ : c=1;
			a=max(c,a);
		}
		cout<<a+1<<endl;
	}
}
