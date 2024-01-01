#include<stdio.h>
#include<string.h>
int main()
{
    int a=0;
    int t;
    scanf("%d",&t);
    while(t--){
        char s[160];
        scanf("%s",s);

        for(int i=0;i<strlen(s);i++){
        if(s[i]=='+'){
            if(s[i+1]=='+'){
            a++;
        }
        }
        else if(s[i]=='-'){
            if(s[i+1]=='-'){
                a--;
        }
        }
        }
    }
    printf("%d\n",a);
    return 0;
}