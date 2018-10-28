#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,x,y;
    cin>>n>>k;
    if(n%2==1) x=(n/2)+1;
    else x=n/2;

    if(k<=x) y=2*k-1;
    else y=2*(k-x);
    cout<<y;
    return 0;
}