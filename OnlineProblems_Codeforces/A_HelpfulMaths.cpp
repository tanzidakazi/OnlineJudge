#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    string s;
    while(cin>>s){
        vector<char>v;
        for(i=0; i<s.size(); i=i+2){
            v.push_back(s[i]);
        }
        sort(v.begin(), v.begin()+ v.size());

        for(i=0; i<v.size()-1; i++){
            cout<<v[i]<<"+";
        }
        cout<<v[i];
    }
return 0;
}