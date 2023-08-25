// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    for(cin>>t; cin>>n; cout<<endl){ int A[n];
    for(int i=0;i<n;++i) cin>>A[i];
    sort(A,A+n);
    vector<int> add;
    cout<<A[0]<<" ";
    for(int i=1;i<n;++i)
      if(A[i]!=A[i-1]) cout<<A[i]<<" ";
      else add.push_back(A[i]);
    for(int i:add) cout<<i<<" ";
  }
}
