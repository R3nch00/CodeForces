#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,t,a; cin>>t;
    while(t--){
        cin>>n;
        map<int,int> map;
        for(int i=0;i<n;++i)
            cin>>a, map[a]++;
        cout<<n-map.begin() -> second<<endl;
    }
}
