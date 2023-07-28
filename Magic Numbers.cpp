#include <bits/stdc++.h>
using namespace std;
main(){
    string s; cin>>s;
    regex r("((1)|(14)|(144))*");
    cout<< ( regex_match(s,r) ? "YES": "NO" );
}
