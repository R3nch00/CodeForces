// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
  int t,n;
  for(cin>>t;cin>>n;){
    int A[n];
    for(int i=0;i<n;++i) cin>>A[i];
    cout<< max_element(A,A+n)-A+1 <<endl;
  }
}
