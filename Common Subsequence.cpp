// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m,i,j,key; cin>>t;
	while(t--){
		key=-1; cin>>n>>m; int a[n],b[m];
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<m;i++)cin>>b[i];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i]==b[j]){
					key=a[i];
					goto skip;
				}
			}
		}
		skip:
		if(key==-1)cout<<"NO";
		else{
			cout<<"YES"<<endl<<1<<" "<<key;
		}
		cout<<endl;
	}
	return 0;
}
