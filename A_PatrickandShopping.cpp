#include<bits/stdc++.h>
using namespace std;
int main(){
    long long d1,d2,d3,a=0,b=0,i;
    long s[3];
    for(i=0; i<3; i++){
    cin>>s[i];
    }
    sort(s, s+3);
   
     a=s[0]+s[1]+s[2];
     b=(s[0]*2) + (s[1]*2);
     cout<<min(a,b);
return 0;
}