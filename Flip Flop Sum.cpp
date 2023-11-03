// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int n,sm=0,vl=2; string s; cin>>n; int arr[n];
		f(n) cin>>arr[i],sm+=arr[i];
		for(int i=1;i<n;i++) vl=min(vl,arr[i]+arr[i-1]);
		cout<<sm-2*vl<<"\n";
	}
}
