#include<stdio.h>
#include<string.h>
int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int sum=a+b+c;
        if(sum>=2) cnt++;
    }
    printf("%d",cnt);
    return 0;
}