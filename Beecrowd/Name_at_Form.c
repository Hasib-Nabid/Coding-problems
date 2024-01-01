#include <stdio.h>
#include <string.h>
int main() {
 
    char s[1000];
    fgets(s,1000,stdin);
    int i=0,cnt=0;
    while(s[i]!='\n'){
        i++;
        cnt++;
        }
    if(cnt<=80){
        printf("YES\n");
    }
    else printf("NO\n");
 
    return 0;
}