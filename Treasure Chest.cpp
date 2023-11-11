// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int a,b,c,d;
int main(){
	cin>>a;
	while(a--){
		cin>>b>>c>>d;
		cout<<((b+d<c) ? 2*c-b-d : max(b,c))<<endl;
	}
	return 0;
}
