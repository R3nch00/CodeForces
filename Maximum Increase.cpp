#import<bits/stdc++.h>
using namespace std;
int main(){
	int n,max=0,sum=0,m=0; cin>>n;
	for(int i=0;i<n;i++){ int x; cin>>x;
		if(x>max){ max=x; sum++;
			if(sum>m||(i==n-1&&m==0)) m=sum;
		}
		else{ sum=1; max=x;
		}
	}
    cout<<m;
}
/*
#include <bits/stdc++.h>
using namespace std;
int n,t,c,w,s;
int main(){ cin>>n;
    while(n--){ cin>>t; c=t>w ? c+1 : 1; s=max(s,c); w=t; }
    cout<<s<<endl;
}
*/
