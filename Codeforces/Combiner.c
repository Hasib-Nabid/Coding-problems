#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
    char a[51];
    char b[51];
    scanf("%s %s",a,b);

    int lena=strlen(a);
    int lenb= strlen(b);
    int max=lena;
    if(lenb>lena) max=lenb;

    for(int i=0;i<max;i++){

    if(i<lena) printf("%c",a[i]);
    if(i<lenb) printf("%c",b[i]);
    }
    printf("\n");
    }
    return 0;
}