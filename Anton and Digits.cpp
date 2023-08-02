#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d; cin>>a>>b>>c>>d; int n=min({a,c,d}),m=min(b,a-n); cout << 256*n+32*m << endl;
}
