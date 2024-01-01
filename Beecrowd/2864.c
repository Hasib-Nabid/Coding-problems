#include <stdio.h>
 
int main() {
 int a,b,c;
 scanf("%d %d %d", &a , &b , &c );
 if(a<=31 || b<=12 || c<=2023){
 printf("%d/%d/%d\n",b,a,c);
  printf("%d/%d/%d\n",c,b,a);
   printf("%d-%d-%d\n",a,b,c);
   }
    return 0;
}