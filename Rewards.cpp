// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f,n; cin >> a >> b >> c >> d >> e >> f >> n;
    a += b+c+4, d +=e+f+9;
    cout <<(a/5+d/10>n ? "NO" : "YES");
}
