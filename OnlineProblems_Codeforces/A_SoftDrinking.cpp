#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,l,c,d,p,nl,np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int x,y,z,a,w,q,s;
   x=k*l/nl;
   y=c*d;
   z=p/np;
   w=x/n;
   q=y/n;
   s=z/n;
   cout<<min(min(w,q),s)<<endl;
return 0;
}