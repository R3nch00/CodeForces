// mes que un club //
#import <bits/stdc++.h>
using namespace std;
void NISHI(){
	int n,m; cin>>n>>m; int arr[2*n];
	for(int i=0;i<2 * n;i++){ cin>>arr[i]; }
	sort(arr,arr + 2*n);
	bool a=true;
	for(int i=0;i<n;i++)
	    if(arr[i+n]-arr[i]<m) a = false;
	cout<<(a ? "YES" : "NO")<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){ NISHI(); }
}
