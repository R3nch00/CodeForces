// mes que un club //
#import <bits/stdc++.h>
using namespace std;
long long n,a[1000001],x,y;
int main(){
ios::sync_with_stdio(false); cin.tie(0);
cin>>n;
while (n--){ cin>>x>>y;
if(x==y) { cout<<0<<' '<<0<<'\n'; continue; }
if(x>y) swap(x,y);
cout<<y-x<<' '<<min(y-x-(x%(y-x)),x%(y-x))<<'\n';
    }
return 0;
}
