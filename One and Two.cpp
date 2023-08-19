// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
  int t,n,num,i,j;
  for(cin>>t;cin>>n;){
    int tw[n]; tw[0]=1;
    for(i=0,j=0;i<n;++i){
      cin>>num;
      if(num==2)
        tw[j++]=i+1;
    }
    cout<<(j%2 ? -1 : tw[(j-1)/2])<<endl;
  }
}
