#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
    char s[100001];
    scanf("%s",s);
    int d=strlen(s);

    if(d<10){
    printf("0.0%d\n",d);
    }
    else if(d<100) printf("0.%d\n",d);
    else if(d<1000) printf("%.2f\n",(d*1.0)/100);
    else if (d<10000) printf("%.2f\n",(d*1.0)/100);
    else printf("100.00\n");
    }
    return 0;
}