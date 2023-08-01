#include <bits/stdc++.h>
using namespace std;
int main(){
int t,a,b;cin>>t;
    while(t--){
        cin>>a>>b;
        cout<< min(a,min(b,(a+b)/3)) <<endl;
    }
return 0;
}
