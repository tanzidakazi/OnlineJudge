#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p,v,t,c=0;
    cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>p>>v>>t;
            if(p+v+t>=2) c++;

        }
    cout<<c<<endl;
    return 0;
}