// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin>>n;
    cout<<(n&1 ? 0 : (1<<(n/2)));
    return 0;
}
