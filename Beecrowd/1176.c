#include <stdio.h>
 
int main() {
    
    int t;
    scanf("%d",&t);
    while(t--){
int n;
scanf("%d",&n);
long long int a[60];
a[0]=0;
a[1]=1;
for(int i=2;i<n;i++){
    a[i]=a[i-1]+a[i-2];
}
    
   printf("Fib(%d) = %lld\n",n,a[n-1]);
}
    return 0;

}