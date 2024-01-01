#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {

char s[100001];
int cnt[10]={0};

while (scanf("%s",s) !=EOF){

    for(int i=0;i<strlen(s);i++){
    cnt[i]++;
    }

    int max=cnt[0];
    int idx=0;

    for(int i=0;i<=9;i++){
       if(cnt[i]>max){
        max=cnt[i];
        idx=i;
       }
    }

    printf("%d\n",idx);
}
    return 0;
}