// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
  int t,n,k;
  for(cin>>t; cin>>n>>k; ){
    int A[n],ch=0;
    for(int i=0;i<n;++i)
      cin>>A[i], ch += i<k && A[i]>k;
    cout<<ch<<endl;
  }
}
