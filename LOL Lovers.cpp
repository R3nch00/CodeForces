// mes que un club //
#include <bits/stdc++.h>
#define f(t) for(int i=0;i<t-1;i++)
#define ll long long
using namespace std;
int main(){
    int t,c=0; string a; cin>>t>>a;
    f(t){ if(a[i]==a[t-1]) c++; }
    cout<<((c!=1) ? (t-1) :
         ((t==4 && a[0]==a[1]) ? 2 :
          ((a[0]!=a[t-1] && t!=4) ? 1 : -1)))<<'\n';
}
