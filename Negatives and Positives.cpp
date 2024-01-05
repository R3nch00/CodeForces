// mes que un club //
#include <bits/stdc++.h>
#define ll long long int
#define f(n)  for (int i=0;i< n;i++)
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
int test_cases; cin>>test_cases;
    while(test_cases--){
        int n; cin >> n; ll ans = 0;
        int negative_count=0,min_absolute_value = 1e10;
       f(n){
            int current_value; cin >> current_value;
            ans += abs(current_value);
            if (current_value < 0) {
                negative_count++;
            }
            min_absolute_value=min(min_absolute_value, abs(current_value));
        }
        cout << ((negative_count % 2 == 0) ? ans : ans - min_absolute_value * 2) << '\n';
    }
    return 0;
}
