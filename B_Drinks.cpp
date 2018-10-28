#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, n, o;
    double p;
    scanf("%d",&n);
    for(i=0; i<n; i++){
    cin>>o;
    p=p+o;
    }
    printf("%.12lf", p/n);

return 0;
}
