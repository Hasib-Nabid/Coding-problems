#include<stdio.h>
void f(int i){
    if(i==0) return;
    printf("I love Recursion\n");
    f(i-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    f(n);
    return 0;
}