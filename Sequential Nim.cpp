// mes que un club //
#import <bits/stdc++.h>
#define loop for(int i =0;i<n;i++)
using namespace std;
void NISHI(){
    int n,k =0; cin>>n;
    int a[n]; loop cin>>a[i];

    while(k<n && a[k]==1) k++;

    cout<<((k==n)^(k%2) ? "Second" : "First") << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    while(n--) NISHI();
}
