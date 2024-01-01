#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(b--){
        if(a%10==0) a/=10;
        else a-=1;
    }
    printf("%d",a);
    return 0;
}