#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,c=0;
    char a[100];
    cin>>a;
    sort(a, a+strlen(a));
    for(i=0; i<strlen(a); i++){
        if(a[i]!=a[i+1]) c++;
    }
    if(c%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else cout<<"IGNORE HIM!"<<endl;
return 0;
}