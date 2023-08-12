// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t; cin>>t;
	while(t--){
		int x ; cin>>x;
		long long a[x+1],ans=0,s=0;
		for(int i=1;i<=x;i++)cin>>a[i],s+=abs(a[i]);
		for(int i=1;i<=x;){
			if(a[i]<0){
				i++;ans++;
				while(i<=x&&a[i]<=0)
					i++;
			}else i++;
		}
		cout<<s<<" "<<ans<<"\n";
	}
	return 0;
}
