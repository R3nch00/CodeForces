#import<bits/stdc++.h>
#define ll long long
#define loop(n) for (int i = 0; i < n; i++)
#define rloop(n) for (int i = 1; i < n; i++)
#define iloop(n) for (int i = n - 1; i >= 0; i--)
#define nloop(n) for (int j = 0; j < n; j++)
#define jloop(n) for (int j = n - 1; j >= 0; j--)
#define srt(v) sort(v.begin(), v.end())
#define srtg(v) sort(v.begin(), v.end(), greater<ll>());
using namespace std;
bool isprim(ll n){
    for (ll i=2;i*i<= n;i++)
        if (n%i == 0)
            return false;
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n; cin>>t;
    while (t--){ cin>>n;
        for (int i=3;i<=n;i=i*2 + 1){
            if(n%i == 0){
                cout<<n/i<< "\n";
                break;
            }
        }
    }
}
