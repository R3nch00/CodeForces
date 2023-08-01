#import <bits/stdc++.h>
using namespace std;
int main(){
  int n,num;
  for(cin>>n;cin>>n;){
    int ans=0,a=0,z=0;
    for(int i=0;i<n;++i){
      cin>>num;
      if(num) a=1,ans+=z,z=0;
      else if(a) z++;
    }
    cout<<ans<<endl;
  }
}
