// mes que un club //
#import <bits/stdc++.h>
using namespace std;
char ch[100000];
int main(void){
	int t; cin>>t;
	while(t--){
		int n,m,x,y; long long fee=0; cin>>n>>m>>x>>y; getchar();
		while(n--){
			int i,j,k,counter;
			i=j=0;
			gets(ch);
			while(i<m){
			  while(i<m&&ch[i]=='*'){i++; j++;}
			  while(j<m&&ch[j]!='*') j++;
			  counter=0;
			  while(i<j){counter++; i++;}
			  if(2*x<y) fee+=counter*x;
			  else fee+=counter/2*y+(counter&1)*x;
			}
		}
		cout<<fee<<endl;
	}
	return 0;
}
