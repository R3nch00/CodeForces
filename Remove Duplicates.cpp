// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n; int a[n]; vector<int> v;
	for(int i=0;i<n;i++) cin>>a[n-i-1];
	for(int i=0;i<n;i++){
		if(find(v.begin(), v.end(), a[i])==v.end())v.push_back(a[i]);
	}
    n=v.size(); cout<<n<<endl;
	for(int i=n-1;i>=0;i--) cout<<v[i]<<" ";
}
