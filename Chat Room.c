#include<bits/stdc++.h>
using namespace std;
int main(){
    string n; cin>>n; regex Pattern(".*h.*e.*l.*l.*o.*");
        cout<<((regex_search(n,Pattern)) ? "YES":"NO");
}
