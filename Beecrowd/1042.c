#include <stdio.h>

int main() {
    int a, b,c,s1,s2,s3,temp;
    scanf("%d %d %d", &a, &b, &c);
if(a<=b && a<=c){
    s1=a;
    s2=b;
    s3=c;
}
else if(b<=a && b<=c){
    s1=b;
    s2=a;
    s3=c;
}
else{
    s1=c;
    s2=a;
    s3=b;
}
if(s2>s3){
    temp=s2;
    s2=s3;
    s3=temp;
}
printf("%d\n%d\n%d\n",s1,s2,s3);
printf("\n");
printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}

