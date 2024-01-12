// mes que un club //
#include <bits/stdc++.h>
#define ll long long
#define f(n) for(int i=0;i<n;i++)
int n,m,i,a[100],b[100],k,x;
using namespace std;
int main(){
    cin>>n>>m;
    f(n){ cin>>a[i]>>b[i]; k+=a[i]; x+=b[i]; }
    if(m<k || m>x){ puts("NO"); }
        else{ puts("YES");
            f(n){ cout<<min(b[i],m-k+a[i])<<" ";
            m-=min(b[i],m-k+a[i]); k-=a[i];
        }
    }
}
