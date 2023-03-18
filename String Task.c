#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    while(cin>>c){
    if(!strchr("aeiouyAEIOUY",c))
        cout<<"."<<(char)tolower(c);
    }
}
