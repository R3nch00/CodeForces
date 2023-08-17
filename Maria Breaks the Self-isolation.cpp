// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t=1; cin>>t;
	while(t--){
		int n; cin >> n; int a[n];
		for(int i = 0 ; i < n ; i++)
		   cin >> a[i];
		sort(a,a+n);
		int cnt = 1;
		for(int i = 0 ; i < n ; i++)
		   if(a[i]<=i+1)
		      cnt = i+2;
		cout << cnt << "\n";
	}
	return 0;
}
