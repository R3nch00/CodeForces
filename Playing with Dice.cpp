// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;++i)
using namespace std;
int main(){
    int a,b; cin>>a>>b; int c=0,s=0,z=0;
    for(int i=1;i<=6;i++){
        if(abs(a-i)<abs(b-i)) c++;
        else if(abs(a-i)==abs(b-i)) s++;
        else z++;
    }
    cout<<c<<" "<<s<<" "<<z<<endl;
return 0;
}
