// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
  int t,n,m,num;
  for(cin>>t;cin>>n>>m;){
    int sum=0;
    for(int i=0;i<n;++i)
      cin>>num, sum+=num;
    cout<<max(0,sum-m)<<endl;
  }
}
