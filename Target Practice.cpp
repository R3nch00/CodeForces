// mes que un club //
#import <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t; cin>>t;
while(t--){
	int sum= 0 ;
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			char s; cin>>s;
			if(s=='X'){ int g=min(i,j), f=min(11-i,11-j);
			sum+=min(g,f);
			}
		}
	}
	cout<<sum<<endl;
    }
}
