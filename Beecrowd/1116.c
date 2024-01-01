#include <stdio.h>
 
int main() {
 
int tc;
scanf("%d",&tc);
for(int i=1;i<=tc;i++){
    float a,b;
    scanf("%f%f",&a,&b);
    if(b==0){
        printf("divisao impossivel\n");
    }
    printf("%.1f\n",a/b);
}
 
    return 0;
}