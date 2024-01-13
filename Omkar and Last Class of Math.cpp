// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
int t,n,k,ans,mn,i;
using namespace std;
int main(){
  cin>>t;
  while(t--){
    cin >> n;
    for(i=2;i*i<=n;i++){
       if(n%i==0){ break; }
    }
    if(n%i!=0){ i=n; }
    cout<<n/i<<" "<<n-n/i<<endl;
  }
}
