// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,t,a[2001]; cin>>t;
	while(t--){ cin>>n;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++)if(a[i]%2) cout<<a[i]<<" ";
		for(i=0;i<n;i++)if(a[i]%2==0) cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}
