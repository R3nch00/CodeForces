#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; int u=0,l=0; cin>>s;
        for(char ch:s) (islower(ch) ? l++:u++);
            for(char ch:s) cout<<(char)(u>l ? toupper(ch):tolower(ch));
            return 0;
}
