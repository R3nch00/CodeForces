#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,t,i,sum,x; cin>>t;
    while(t--){
        sum=0; cin>>n;
   for(i=0;i<n;i++){
    cin>>x;
    sum+=x;
   }
    cout<<(sum+n-1)/n<<endl;
   }
}
