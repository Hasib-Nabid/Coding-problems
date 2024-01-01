#include<stdio.h>
#include<string.h>
int main()
{
    int a[6][6];
    int x,y;

    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            scanf("%d",&a[i][j]);
        }
    }
        for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
        if(a[i][j]==1){
           x=i;
           y=j;
           break;
            }
        }
    }

    if((x==1 && y==1) || (x==1 && y==5) || (x==5 && y==1) || (x==5 && y==5)) printf("4");
    else if((x==1 && y==2) || (x==1 && y==4) || (x==5 && y==2) || (x==5 && y==4)) printf("3");
    else if((x==2 && y==1) || (x==2 && y==5) || (x==4 && y==1) || (x==4 && y==5)) printf("3");
    else if((x==2 && y==2) || (x==2 && y==4) || (x==4 && y==2) || (x==4 && y==4)) printf("2");
    else if((x==3 && y==1) || (x==3 && y==5) || (x==1 && y==3) || (x==5 && y==3)) printf("2");
    else if((x==3 && y==2) || (x==3 && y==4) || (x==2 && y==3) || (x==4 && y==3)) printf("1");
    else printf("0");
    return 0;
}
