#include<bits/stdc++.h>
using namespace std;
#define f(a,b) for(int a=1; a<=b; a++)
int main(){
	int n,ans=0; cin>>n; int a[2005];
	f(i,n) cin>>a[i];
	f(i,n){ int m=a[i],l=0;
		while(m>0) m=a[m],l++;
		ans=l>ans ? l:ans;}
	cout<<++ans;
	system("PAUSE");
}
