#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        double a,b;
        int ans;
        scanf("%lf %lf",&a,&b);
        a+=2;
        if(a>b){
            ans=ceil(a/b);
        }
        else if(a<b) {ans=ceil(a/b);}
        printf("%d\n",ans);
    }
    return 0;
}