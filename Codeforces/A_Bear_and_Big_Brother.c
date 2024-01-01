#include<stdio.h>
#include<string.h>
int main()
{
    int l,b;
    scanf("%d%d",&l,&b);
    int y=0;
    while(1){
        l*=3;
        b*=2;
        if(l>b) {
            y++;
            break;
        }
        else y++;
    }
    printf("%d",y);
    return 0;
}