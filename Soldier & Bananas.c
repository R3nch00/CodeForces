#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w,cost; cin>>k>>n>>w; cost=k*(1+w)*w/2;
        cout<<((cost<n) ? 0:cost-n);
}
