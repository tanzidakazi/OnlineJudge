#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int uc=0,lc=0,i;
    getline(cin,s);
    for(i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            uc= uc+1;
        }
        if(s[i]>='a' && s[i]<='z')
        {
            lc=lc+1;
        }
    }
    for(i=0; i<s.size(); i++){
    if(uc==lc || lc>uc )
    {
            s[i]=tolower(s[i]);
    }
    else
    {
            s[i]=toupper(s[i]);
    }
    }
           cout<<s;
    return 0;
}