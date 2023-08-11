// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,k,m=-1000000000; cin>>n>>k;
    while(n--){ int f,t,e; cin>>f>>t;
    e=max(0,(t-k));
    m=max(m,f-e);
    }
    cout<<m<<endl;
    return 0;
}
