#import<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t=1;
    while(t--){ int a,b,c,d,x,y; cin>>a>>b>>c>>d;
        x=abs(c-a); y=abs(d-b);
        if(x!=y && x!=0 && y!=0){ cout<<"-1"<<endl; }
        else{
            if(a==c){
                cout<<a+y<<" "<<b<<" "<<c+y<<" "<<d<<endl;}
            else if(b==d){
                cout<<a<<" "<<b+x<<" "<<c<<" "<<d+x<<endl;}
            else if(a>c){
                cout<<a-x<<" "<<b<<" "<<c+x<<" "<<d<<endl;}
            else if(a<c){
                cout<<a+x<<" "<<b<<" "<<c-x<<" "<<d<<endl;}}
    }
return 0;}
