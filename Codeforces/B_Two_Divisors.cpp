#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long gccd= __gcd(a,b);
        long ans= (a*b)/gccd;
        
        if (ans == b)
        {
            cout << ans * (b / a) << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
        
    return 0;
}