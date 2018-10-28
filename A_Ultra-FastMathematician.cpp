#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    string x, y;
    cin>>x>>y;
    for(i=0; i<x.size(); i++){
            if(x[i]==y[i]) cout<<0;
             else if(x[i]!=y[i]) cout<<1;
    }
return 0;
}