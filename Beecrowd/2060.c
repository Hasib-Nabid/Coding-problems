#include <stdio.h>
 
int main() {
 
int t,two=0,three=0,four=0,five=0;
scanf("%d",&t);
int a[t];
for(int i=0;i<t;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<t;i++){
    if(a[i]%2==0 ){
        two++;
    }
   if(a[i]%3==0 ){
        three++;
    }
   if(a[i]%4==0 ){
        four++;
    }
   if(a[i]%5==0 ){
        five++;
    }
}
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",two,three,four,five);

    return 0;
}