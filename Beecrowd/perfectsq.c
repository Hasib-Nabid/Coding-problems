#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    bool isperfectsq=false;
    while(i*i<=n){
        if(i*i==n){
            isperfectsq=true;
            break;
        }
        i++;
    }
    if(isperfectsq) printf("perfect sq");
    else printf("Not perfect sq");

    return 0;
}