#include <stdio.h>
 #include<math.h>
int main() {
 double a,b,c,d,dis;
 scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
 dis= sqrt((c-a)*(c-a)+(d-b)*(d-b));
 printf("%.4lf\n",dis);
 
    return 0;
}