#include <bits/stdc++.h>
using namespace std;
int main() {
int t; cin>>t;
    while(t--) {
        int a,n,k1=0,k2=0; cin >> n;
        while(n--) { cin>>a; (a==1) ? k1++ : k2++; }
        puts((k1%2 == 1 || (k2%2 == 1 && k1<2)) ? "NO":"YES"); }}
