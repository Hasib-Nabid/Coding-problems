#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    char s[110];
    scanf("%s",s);
    bool flag=true;
    for(int i=0,j=strlen(s)-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            flag=false;
        }
    }
    if(flag) printf("Yes\n");
    else printf("No");
    return 0;
}