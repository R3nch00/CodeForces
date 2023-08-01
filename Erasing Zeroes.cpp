#include <bits/stdc++.h>
using namespace std;
int main(){
int tc=1; cin>>tc;
    while(tc--){ string s;cin>>s;
    cout<<count(s.begin()+s.find('1'),s.begin()+s.rfind('1'),'0')<<endl;
}
}
