// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
using namespace std;
#define NISHI int t; cin>>t; while(t--)
int main(){
  NISHI{
    int n; bool ans=1; string a [51]; cin>>n;
    f(n) cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1;j++)
                if(a[i][j]=='1' && a[i+1][j] =='0' && a[i][j+1] =='0') ans=0;
    puts((ans==1) ? "YES" : "NO");
    }
}
