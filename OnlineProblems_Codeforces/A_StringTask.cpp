#include<bits/stdc++.h>
using namespace std;
int main() {
    char s[100];
    cin>> s;
    for(int i=0; i<strlen(s); i++) {
        if(s[i]!='A' && s[i]!='O' && s[i]!='Y' && s[i]!='E' && s[i]!='U' && s[i]!='I' && s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!='e' && s[i]!='u' && s[i]!='i') {
            if(s[i]<91) {
            s[i]=s[i]+32;
            cout<<"."<<s[i];}
            else cout<<"."<<s[i];
        }
    }
    return 0;}