#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    long long l=s.size();
    long long c=0;
    for(i=0; i<l; i++)
    {
        if(s[i]=='4' || s[i]=='7') c=c+1;
    }
    if(c==4 || c== 7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}