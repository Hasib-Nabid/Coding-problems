#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char s[10000];
    scanf("%s",s);
    int cnt=0;

    for(int i=0;i<strlen(s);i++){
        if(s[i]=='7' || s[i]=='4'){
            cnt++;
        }
    }

    char s1[1000000]= {cnt+'0'};
    bool flag=true;
 for(int i=0;i<strlen(s1);i++){
     if(s1[i]!='7' || s1[i]!='4'){
        flag=false;
 }
 }

if(flag) printf("YES");
else printf("NO");
    return 0;
}