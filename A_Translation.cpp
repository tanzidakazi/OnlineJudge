#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    string s, t;
    cin>>s>>t;
    reverse(s.begin(), s.end());
    if(s==t) cout<<"YES";
    else cout<<"NO";

return 0;
}