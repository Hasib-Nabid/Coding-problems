#include <stdio.h>
#include <string.h>
int main() {
 
    char s1[1000];
    char s2[1000];
    char s3[1000];
    scanf(" %[^\n]",s1);
    scanf(" %[^\n]",s2);
    scanf(" %[^\n]",s3);

    printf("%s%s%s\n",s1,s2,s3);
    printf("%s%s%s\n",s2,s3,s1);
    printf("%s%s%s\n",s3,s1,s2);
    

   int i = 0;
    while(s1[i] != '\0' && i < 10)
    {
        printf("%c",s1[i]);
        i++;
    }
    
    i = 0;
    while(s2[i] != '\0' && i < 10)
    {
        printf("%c",s2[i]);
        i++;
    }
    i = 0;

    while(s3[i] != '\0' && i < 10)
    {
        printf("%c",s3[i]);
        i++;
    }

    printf("\n");
    return 0;
}