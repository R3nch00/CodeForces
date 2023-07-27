#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tts; cin>>tts;
	while(tts--){ int n; cin>>n; int arr[n][n];
		if(n==2){ cout<<"-1\n"; continue; }
		int c=1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(c<=n*n){
					cout<<c<<" "; c+=2;
				}else{
					c=2;
					cout<<c<<" ";
					c+=2;
				}
			}
			cout << "\n";
		}
	}
	return 0;
}
