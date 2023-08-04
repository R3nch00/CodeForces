#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2; cin>>str1>>str2;
    int t(0),d(0),w(0);
    for(int i=0;i<str1.length();i++){
        d+=str2[i] == '?';
        t+=(str1[i]=='+')?1:-1;
        if(str2[i]=='+')t-=1;
        else if(str2[i]=='-')t+=1;
    }
    for(int i=0;i<(1<<d);i++){
        int c=t,k=i;
        for(int j=1;j<=d;j++){
            c+=(k&1)?1:-1;
            k/=2;
        }
        w+=(c==0)?1:0;
    }
    d=1<<d;
    cout.precision(20);
    cout<<fixed<<w/double(d)<<endl;
	return 0;
}
