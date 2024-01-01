#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=a/(1+(b/100));
    printf("%d",ans);
    return 0;
}