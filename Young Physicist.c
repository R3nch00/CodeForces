#include<bits/stdc++.h>
using namespace std;
int main(){
    int dimension,a,b,c,x,y,z; cin>>dimension; while(dimension--){cin>>a>>b>>c;x+=a;y+=b;z+=c;}
        cout<<((x|y|z) ? "NO":"YES"); //cout<<((x==0&&y==0&&z==0) ? "YES":"NO");
}



