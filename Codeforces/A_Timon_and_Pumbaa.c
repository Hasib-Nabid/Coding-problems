#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int d=a-b;
        if(d>=0){
            printf("%d\n",d);
        }
    else  printf("0\n");

    return 0;
}