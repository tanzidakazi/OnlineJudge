#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(j=0; j<t;j++){
    for(i=0; i<n; i++){
            if(s[i+1]=='G' && s[i]=='B'){
               s[i]='G';
               s[i+1]='B';
               i=i+1;
            }
    }
    }
        cout<<s;
return 0;
}