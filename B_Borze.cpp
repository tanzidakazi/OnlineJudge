#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    getline(cin, st);
    for(int i=0; i<st.size(); i++)
    {
        if(st[i]=='.')
        {
            printf("0");
        }
        else if(st[i]=='-' && st[i+1]=='.')
        {
            printf("1");
            i=i+1;
        }
        else if(st[i]=='-' && st[i+1]=='-')
        {
            printf("2");
            i=i+1;
        }
    }
    return 0;
}
