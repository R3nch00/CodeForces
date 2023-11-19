// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(k) for(int i=0;i<k;i++)
using namespace std;
int i,t,n,k,a[500000];
int main(){
	cin.tie(0);
	cin>>t;
	while(t--){ cin>>n>>k;
		f(k){ cin>>a[i]; a[i]=n-a[i]; }
		sort(a,a+k);
		a[k]=n;
		for(i=0;i<=k;i++){
			if(n<=a[i]){ cout<<i<<endl; break; }
			n-=a[i];
		}
	}
	return 0;
}
