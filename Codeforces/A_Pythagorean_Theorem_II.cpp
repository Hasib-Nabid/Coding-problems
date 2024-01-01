#include<stdio.h>
#include<stdbool.h>
const int mx=2e8;

int main()
{
    bool perfectsq[mx];
    int n,cnt=0;
    scanf("%d",&n);
        for(int i=1;i<=n;i++){
            perfectsq[i*i]=1;
    }

    for(int a=1;a<=n;a++){
        for(int b=a;b<=n;b++){
            int v=(a*a)+(b*b);

            if(perfectsq[v]){
                cnt++;
            }
    }
    }
    printf("%d",cnt);
    return 0;
}
