// mes que un club //
#import <bits/stdc++.h>
#define f(n) for(int i=0; i<n; i++)
using namespace std;
int main() {
    int cs;
    cin >> cs;
    string arr[cs];

    f(cs) {
        cin >> arr[i];
    }

    f(cs) {
        int row = arr[i][0] - 'a';
        int col = arr[i][1] - '0';

        // Vertical
        for (int j = 0; j < 8; j++) {
            if (j + 1 != col) {
                cout << arr[i][0] << j + 1 << "\n";
            }
        }

        // Horizontal
        for (int j = 0; j < 8; j++) {
            if (j != row) {
                cout << char('a' + j) << arr[i][1] << "\n";
            }
        }
    }

    return 0;
}

