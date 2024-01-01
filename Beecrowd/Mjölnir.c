#include <stdio.h>
 
int main() {
 
int t;
scanf("%d",&t);
while(t--){
    char s[100];
    int a;
    scanf("%s %d",s,&a);
    
    if(s[0]='t' && s[1]=='h' && s[2]=='o' && s[3]== 'r'){
        printf("Y\n");
    }
    else printf("N\n");
}
 
    return 0;
}