#include<stdio.h>
#include<string.h>
int main()
{   
    int t;
    scanf("%d",&t);
    while (t--)
    {   
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b) printf("Square");
    else printf("Rectangle");
    }
    return 0;
}