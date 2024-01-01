#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s[1001];
        scanf(" %[^\n]",s);

        for(int i=0;i<strlen(s);i++){
            if((s[i]>= 'a' && s[i]<='z') || (s[i]>= 'A' && s[i]<='Z'))
            {
                s[i]= s[i]+3;
            }
        }

        int i=0,j=strlen(s)-1;
        while(i<j){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        i++;
        j--;
        }

                for(int i=strlen(s)/2; i<strlen(s);i++){
                s[i]= s[i]-1;
        }
        printf("%s\n",s);
    }

    return 0;
}