#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, n, enter, exit, t=0,m=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>exit>>enter;
        t=t+(enter-exit);
        if(t>m){
            m=t;
        }
    }
    cout<<m;
return 0;
}