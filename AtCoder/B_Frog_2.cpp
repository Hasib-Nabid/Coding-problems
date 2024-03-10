#include <bits/stdc++.h>
using namespace std;

int dp[100005];

int frog(int n, int arr[], int k) {
    if (n == 0) return 0;
    if (dp[n] != -1) return dp[n];

    int jump = INT_MAX;
    for (int i = 1; i <= k; i++) {
        int count=INT_MAX;
        if (n - i >= 0) {
            count = frog(n - i, arr, k) + abs(arr[n] - arr[n - i]);
            jump = min(count, jump);
        }
    }
 return   dp[n]=jump;
}

int main() {
    int n, k;
    cin >> n >> k;
    int h[n];
    for (int i = 0; i < n; i++) cin >> h[i];
    memset(dp, -1, sizeof(dp));
    cout << frog(n - 1, h, k);

    return 0;
}
