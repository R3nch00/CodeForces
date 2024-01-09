// mes que un club //
#include <bits/stdc++.h>
#define f(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(NULL); cin.tie(nullptr);
    int t,n,m,a[200][200]; cin>>t;
    for(;t--;){ cin>>n>>m;
    f(n)
        for(int j=0;j<m;j++) cin>>a[i][j];
        int s=0;
    f(n)
        for(int j=0;j<m;j++){
        int w=-a[i][j];
    for(int k=0;k<n;k++){
    int d=abs(i-k);
        if(j>=d) w+=a[k][j-d];
        if(j+d<m) w+=a[k][j+d];
    }
    s=max(s,w);
  }
    cout<<s<<"\n";
  }
return 0;
}
