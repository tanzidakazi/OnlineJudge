#include<bits/stdc++.h>
using namespace std;
int main(){
int i,l=0;
 string s;
 cin>>s;
 for(i=0; i<s.size(); i++){
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9' ){
       l=1;
        break;
    }
 }
    if(l==1)cout<<"YES";
    else cout<<"NO";
return 0;
}