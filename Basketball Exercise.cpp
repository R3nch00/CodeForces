// mes que un club //
#include <bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n; int hgt[2][n];
    f(i,2)
        for(int& h : hgt[i]) cin>>h;
    vector<long long> ans(2,0);
    f(i,n)
        ans={max(ans[0],ans[1]+hgt[0][i]),max(ans[1],ans[0]+hgt[1][i])};
    cout<<max(ans[0],ans[1]);
    return 0;
}
