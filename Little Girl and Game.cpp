// mes que un club //
#include <bits/stdc++.h>
using namespace std;
#define f(n) for(int i=0;i<n;i++)
int flag,sum,c[30]; string s;
int main(){
    cin>>s;
    f(s.size()) c[s[i]-'a'+1]++;
    f(26) if(c[i+1]%2 == 1) sum++;
    if(sum == 0 || sum % 2 == 1) flag=1;
    return cout << (flag ? "First" : "Second"), 0;
}
