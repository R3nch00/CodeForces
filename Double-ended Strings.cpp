// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define ar array
#define f(n) for(int i{};i<n;i++)
using namespace std;
int main(){
ios_base::sync_with_stdio(NULL); cin.tie(nullptr);
int T,num,ans; string a,b; cin>>T;
while(T--){
    cin>>a>>b; ans=0;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]){ num=0;
                while(a[i+num]==b[j+num]&&i+num<a.size()&&j+num<b.size()){ num++; }
					ans=max(num,ans);
				}
			}
		}
    cout<<a.size()+b.size()-2*ans<<endl;
  }
 return 0;
}
