// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int a[20],n;
bool dfs(int x, int s) {
    if(x==n) return s%360==0?1:0;
    return dfs(x+1,s+a[x+1])||dfs(x+1,s-a[x+1]);
}
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cout<< ((dfs(0,0))? "YES\n" : "NO\n");
}
