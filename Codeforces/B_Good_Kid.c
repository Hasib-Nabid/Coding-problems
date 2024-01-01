#include <stdio.h>
#include <limits.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int min = INT_MAX;
        int idx=0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < min) {
                min=arr[i];
                idx=i;
            }
        }

        arr[idx]=min+1;


        long long  sum = 1;

        for (long long i = 0; i < n; i++) {
            sum *= arr[i];
        }

        printf("%lld\n", sum);
    }

    return 0;
}