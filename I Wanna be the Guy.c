#include<bits/stdc++.h>
using namespace std;
int main(){
    int level,x,y,DoJo;set<int>st; cin>>level>>x;
        while(x--){cin>>DoJo; st.insert(DoJo);}
                        cin>>y;
        while(y--){cin>>DoJo; st.insert(DoJo);}
        cout<<((st.size()==level) ? "I become the guy.":"Oh, my keyboard!");
}

