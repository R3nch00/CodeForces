// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int m; cin>>m; int a[m];
		for(int i=0;i<m;i++) cin>>a[i];
		sort(a,a+m,greater<int>());
		for(int i=0;i<m;i++) cout<<a[i]<<' ';
	}
}
