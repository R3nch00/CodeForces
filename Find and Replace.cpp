// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t; cin>>t;
	while(t--){
		int n;char a[2010];int f=1; cin>>n>>a;
		for(int i=0;i<n;i+=2)
            for(int j=1;j<n;j+=2)
                if(a[i]==a[j]) f=0;
		cout<<(f ? ("YES\n") : ("NO\n"));
	}
	return 0;
}

