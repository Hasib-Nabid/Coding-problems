#include<stdio.h>
int main()
{
    char e,f,g;
    scanf("%c %c %c",&e,&f,&g);

    printf("A = %c, B = %c, C = %c\n",e,f,g );
     printf("A = %c, B = %c, C = %c\n",f,g,e);
      printf("A = %c, B = %c, C = %c\n",g,e,f);
    return 0;
}
