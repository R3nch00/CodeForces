#include<bits/stdc++.h>
using namespace std;
int main(){
    char A[100],B[100];
    cin>>A>>B;
    int c=strcmpi(A,B);
    if(c<0)cout<<-1;
    else if(c==0)cout<<0;
    else cout<<1;
}
