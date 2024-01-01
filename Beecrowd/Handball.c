#include <stdio.h>
 
int main() {
 
int n,m;
scanf("%d%d",&n,&m);
int arr[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",arr[i][j]);       
}
}


    int cnt=0;
for(int i=0;i<n;i++){
   int zero=0;
    for(int j=0;j<m;j++){
        if(arr[i][j]!=0){
        zero++;
        }
        }
        if(zero==n){
        cnt++;
    }
}
     printf("%d\n",cnt);

    return 0;
}