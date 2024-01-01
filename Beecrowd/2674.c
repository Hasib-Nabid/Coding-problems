#include <stdio.h>
 
int main() {

int a,x,cnt=0;
scanf("%d",&a);
for(int i=2;i<a;i++){
    if(a%i==0){
        cnt=1;
        break;
    }
}
if (cnt==0){
    while(a>0){
    int x= a%10;
    a=a/10;
    for(int j=2;j<x;j++){
        if(x%j==0){
            cnt=2;
            break;
        }
    }
}
}
 if (cnt == 0){
    printf("Super\n");
 }
 else if(cnt==1){
printf("Nada\n");
 }
else if (cnt==2){printf("Primo\n");
}
    return 0;
}