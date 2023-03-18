#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    cout<<(((n+a-1)/a)*((m+a-1)/a)); //((n-1)/(a+1)*(m-1)/(a+1));
    return 0;
}
