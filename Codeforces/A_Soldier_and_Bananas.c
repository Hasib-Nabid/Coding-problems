#include<stdio.h>
#include<string.h>
int main()
{
   long long int sum=0;
   long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);

    for(int i=1;i<=c;i++){
        sum+=a*i;
    }
    long long int ans= sum-b;
    if(ans<=0) printf("0");

    else printf("%lld",ans);
    return 0;
}