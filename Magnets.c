#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j=0,Magnet[100000],com=0; cin>>n;
        for(i=0;i<n;i++) cin>>Magnet[i];
            for(i=0;i<n;i++) {if(j!=Magnet[i])com++; j=Magnet[i];}
                cout<<com;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,magnet[100000],i,com=1; cin>>n;
        for(i=0;i<n;i++){cin>>magnet[i];}
            for(i=1;i<n;i++){if(magnet[i]!=magnet[i-1]) com++;} cout<<com;
}
*/
