#include<stdio.h>
#include<string.h>
const int mx = 1e7+123;
char s[mx];
int cnt[30];
int main()
{
    scanf("%s",s);

    for(int i=0;i<strlen(s);i++){
        cnt[s[i]-97]++;
    }

    for(char i=0;i<26;i++){
         if(cnt[i]>0){
         printf("%c : %d\n",i+97,cnt[i]);
    }
    }
        return 0;
}
