#include<bits/stdc++.h>
using namespace std;

int32_t main () 
{
   
int t;
cin>>t;
while (t--)
{
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        int ans=INT_MAX;

        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
            {
                int res = arr[i] + arr[j] + (j + 1) - (i + 1);
                ans = min(ans, res);
            }
        cout << ans << endl;
    }
}

    return 0;
}