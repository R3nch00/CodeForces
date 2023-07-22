#import <bits/stdc++.h>
using namespace std;
int main(){
	int a; cin>>a;
	while(a--){
		string ans="";
		int n; cin>>n; string l[n];
		for(int i=0;i<n;i++){ cin>>l[i]; }
		for(int i=0;i<n/2;i++){ ans+=l[i]+' '+l[n-i-1]+' '; }
		if(n%2==1){ ans+=l[n/2]; }
		cout<<ans<<endl;}
}
/*
#include <bits/stdc++.h>
using namespace std;
long n,i,j,t,a[305];
int main(){
  cin>>n;
  for(i=1;i<=n;i++){ cin>>t;
      for(j=1;j<=t;j++) cin>>a[j];
        for(j=1;j<=t/2;j++) cout<<a[j]<<" "<<a[t-j+1]<<" ";
      if(t%2==1) cout<<a[(t+1)/2];
      cout<<'\n'; }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){int n; cin>>n; int a[300],i;
        for(i=0;i<n;i++) cin>>a[i];
            for(i=0;i<n/2;i++) cout<<a[i]<<" "<<a[n-1-i]<<" ";
if(n%2!=0) cout<<a[i]<<endl;
}
return 0;
}
*/
