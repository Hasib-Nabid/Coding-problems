#include <stdio.h>
int main() {
int tc;
scanf("%d",&tc);
for(int i=1;i<=tc;i++){
    int a;
    scanf("%d",&a);
    if(a==0) printf("NULL\n");
    else if(a<0 && (a%2)==0) printf("EVEN NEGATIVE\n");
        else if(a<0 && (a%2)!=0) printf("ODD NEGATIVE\n");
                else if(a>0 && (a%2)!=0) printf("EVEN POSITIVE\n");
                        else printf("EVEN POSITIVE\n");
}
 
    return 0;
}