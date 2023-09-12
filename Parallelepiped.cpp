// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int a,b,c; cin>>a>>b>>c;
  cout<<(sqrt(a*c/b)+sqrt(a*b/c)+sqrt(b*c/a))*4;
  return 0;
}
