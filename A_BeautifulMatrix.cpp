#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,res=0;
    int arr[5][5];
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            scanf("%d", &arr[i][j]);

            if(arr[i][j]==1){
             res=abs(i-2)+ abs(j-2);
                printf("%d",res);
            }
        }
    }

return 0;
}