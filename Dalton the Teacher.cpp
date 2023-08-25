// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int t,a,n; cin>>t;
	while(t--){
		cin>>n; int same=0;
		for(int i=1;i<=n;i++){ cin>>a;
            if(a==i) same++;
		}
		cout<<ceil(same*1.0/2)<<'\n';
	}
}
