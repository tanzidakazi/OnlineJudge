#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
        if(s[0]>='A' && s[0]<='Z'){
            cout<<s;
        }else{
       s[0]=toupper(s[0]);
        cout<<s;
        }
    return 0;
    }
