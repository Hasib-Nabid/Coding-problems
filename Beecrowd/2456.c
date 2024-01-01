#include <stdio.h>
 
int main() {
 
int a[5];
int j=0,d=0;
for(int i=0;i<5;i++){
scanf("%d",&a[i]);}

for(int i=0;i<4;i++){
    if(a[i]>a[i+1]){
      d++;
    }
    else if(a[i]<a[i+1]){
        j++;
    }

    }

     if(d==4) {printf("D\n");}
        else if(j==4) {printf("C\n");}
        else {printf("N\n");}

    return 0;
}