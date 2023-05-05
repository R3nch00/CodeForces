#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int i,n,x;int maxvalue=0,maxindex=0,minindex=0;int minvalue=1000;
    cin>>n;
    for(i=0;i<n;i++){
    cin>>x;
    if(x>maxvalue){maxindex=i; maxvalue=x;}
    if(x<=minvalue){minindex=i; minvalue=x;} }
    (maxindex>minindex) ? cout<<(maxindex-1)+(n-minindex)-1 : cout<<(maxindex-1)+(n-minindex) ;
return 0;
}