// mes que un club //
#import <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll x; cin>>x;
while(x--){
    for(int i=0;i<9;i++){ string s; cin>>s;
        for(int j=0;j<9;j++)
            if(s[j]=='9') s[j]='8';
cout<<s<<endl;
    }
  }
return 0;
}
