// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
int main(){
	int a=0,b=0,n,arr; cin>>n;
	while(n--){
		cin>>arr; (arr%2==0) ? b++ : a++;
	}
	cout<<((a>b) ? b : a);
}
