// mes que un club //
#import <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
#define f(x) for(int i=0;i<x;i++)
#define f(c0) for(int i=0;i<c0;i++)
using namespace std;
int main(){
    int n,c0=0,c5=0; cin>>n;
    f(n){ int a; cin>>a; a ? c5++ : c0++; }
    int x=(c5/9)*9;
    if(c0){
        if(x/9){
            f(x) cout<<5;
            f(c0) cout<<0;
            cout<<endl;
        }
        else
            cout<<0<<endl;
    }
    else
        cout<<-1<<endl;
}
