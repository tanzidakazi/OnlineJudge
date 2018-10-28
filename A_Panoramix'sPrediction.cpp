#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[50];
    a[2]=3;
    a[3]=5;
    a[5]=7;
    a[7]=11;
    a[11]=13;
    a[13]=17;
    a[17]=19;
    a[19]=23;
    a[23]=29;
    a[29]=31;
    a[31]=37;
    a[37]=41;
    a[41]=43;
    a[43]=47;
    a[47]=53;
    if(a[n]==m) cout<<"YES";
    else cout<<"NO";
    return 0;
}