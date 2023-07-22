#import<bits/stdc++.h>
using namespace std;
int main(){
    int m; cin>>m;
    while(m--){
		int n; cin>>n; string a; cin>>a; int x=0,y=0,sign=0;
		for(int i=0;i<n;i++){
			if(a[i]=='U')y++;
			else if(a[i]=='D')y--;
			else if(a[i]=='L')x--;
			else x++;
			if(x==1&&y==1) sign=1;
		}
		if(sign)puts("YES");
		else puts("NO");
	}
}
/*
#import<bits/stdc++.h>
using namespace std;
char s[51];
int T,n;
int main(){
	cin>>T;
	while(T--){ int x=0,y=0,fail=1; cin>>n>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='L') x--;
			else if(s[i]=='R') x++;
			else if(s[i]=='U') y++;
			else y--;
			if(x==1&&y==1){fail=0;break;}
		}
		puts(fail ? "NO" : "YES");
	}
	return 0;
}
*/
