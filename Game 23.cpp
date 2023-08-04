// mes que un club //
#import <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k = 0; cin>>a>>b;
    if (b%a==0){
        b /= a;
        while (b % 3 == 0) b /= 3,k++;
        while (b % 2 == 0) b /= 2,k++;
        if (b == 1){
            cout << k;
            return 0;
        }
    }
    cout << -1;
}
