#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0,j=0,c=0;
    string s1="hello", s2;
    cin>>s2;
    for(i=0; i<s2.size(); i++){
            if(s2[i]==s1[j]){
                c++;
                j++;
            }
    }
    if(c==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}