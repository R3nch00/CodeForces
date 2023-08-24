// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int t; cin>>t;
  while(t--){
  	int x,k; cin>>x>>k;
  	pair<int,int> a[x+1];
  	int b[x+1],ans[x+1];
  	for(int i=1;i<=x;i++)
  		cin>>a[i].first,a[i].second=i;
  	for(int i=1;i<=x;i++)
  		cin>>b[i];
  	sort(a+1,a+x+1); sort(b+1,b+x+1);
  	for(int i=1;i<=x;i++)
  		ans[a[i].second]=b[i];
  	for(int i=1;i<=x;i++)cout<<ans[i]<<" ";
  	cout<<"\n";
  }
  return 0;
}
