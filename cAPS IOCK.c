#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;int i,o=0,l=str.size();
        for(i=1;i<l;i++){if(str[i]>='A'&&str[i]<='Z') o++;}
            if(o==l-1){for(i=0;i<l;i++)(str[i]>='a'&&str[i]<='z') ? str[i]-=32:str[i]+=32;}
                cout<<str;
}

