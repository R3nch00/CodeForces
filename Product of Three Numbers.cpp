#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; vector<int> vc;
        for(int i=2;i*i<n;i++){
            if(n%i==0) vc.push_back(i),n/=i;
            if(vc.size()==2) break;
        }
        if(vc.size()==2) cout<<"YES"<<" "<<vc[0]<<" "<<vc[1]<<" "<<n<<endl;
        else cout<<"NO"<<endl;
    }
}
