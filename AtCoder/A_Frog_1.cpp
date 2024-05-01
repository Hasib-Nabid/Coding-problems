#include <bits/stdc++.h>
using namespace std;
int ans[100005];
int frog(int n, int arr[])
{
    if (n == 0)
        return 0;
    if (ans[n] != -1)
        return ans[n];
    int left = frog(n - 1, arr) + abs(arr[n] - arr[n - 1]);
    int right = INT_MAX;
    if (n > 1)
        right = frog(n - 2, arr) + abs(arr[n] - arr[n - 2]);
    return ans[n] = min(left, right);
}
int main()
{
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++)
        cin >> h[i];
    memset(ans, -1, sizeof(ans));
    cout << frog(n - 1, h);

    return 0;
}
