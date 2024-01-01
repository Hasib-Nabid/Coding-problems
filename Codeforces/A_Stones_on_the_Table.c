#include<stdio.h>
#include<string.h>
int main()
{      

    int t,cnt=0;
    scanf("%d",&t);
    char s[t];
    scanf("%s",s);
    for(int i=0;i<strlen(s)-1;i++){
            if(s[i]==s[i+1]){
                cnt++;
            }
        }
    printf("%d",cnt);
    return 0;
}