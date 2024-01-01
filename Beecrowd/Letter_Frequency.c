#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char s[201];
        fgets(s,201,stdin);
        int cnt[128]={0};
        for(int i=0;i<strlen(s);i++){
            cnt[s[i]]++;
        }
        int max= cnt[0];
            for(int i=1;i<128;i++){
           if(cnt[i]>max){
            max=cnt[i];
           }
        }
        printf("%d\n",max);
    }
    printf("");
    return 0;
}