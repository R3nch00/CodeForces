// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
#define f(m) for(int i=0;i<m;i++)
using namespace std;
int main(){
    int n,m; cin>>n>>m; ll d[n];
    f(n){cin>>d[i];}
    ll sub=0,j=0;
    f(m){
        ll l; cin>>l; l-=sub;
        while(j<n){
           if(l <= d[j]){ cout<<j+1<<" "<<l<<"\n"; break;}
           else{ l-=d[j]; sub+=d[j]; }
           j++;
        }
    }
}
