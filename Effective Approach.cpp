// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,m; cin>>n; int a[n];
    for(int i=1; i<=n; i++){
        cin>>x; a[x]=i;
    }
    cin>>m; long long s1=0,s2=0;
    while(m--){
        cin>>x; s1+=a[x]; s2+=n-a[x]+1;
    }
    cout<<s1<<' '<<s2<<'\n';
    return 0;
}
