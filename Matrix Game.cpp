// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
        int n, m; cin >> n >> m; int a[n][m];
		set< int > r,c;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				if(a[i][j] == 1){
					r.insert(i); c.insert(j);
                }
			}
        }
        int x=n - (r.size()),y=m - (c.size()),mn = min(x,y);
		puts((mn%2) ? "Ashish\n" : "Vivek\n");
	}
	return 0;
}
