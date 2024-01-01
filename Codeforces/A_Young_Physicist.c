#include<stdio.h>
#include<string.h>
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    int a[n][3];

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
    }


    for(int i=0;i<3;i++){
        int sum=0;
       for(int j=0;j<n;j++){
        sum+=a[j][i];
    }
        if(sum==0) cnt++;
    }
    
    if(cnt==3) printf("YES\n");
    else printf("NO\n");

    return 0;
}