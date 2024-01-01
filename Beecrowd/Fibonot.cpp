#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

int main()
{
    int n;
    cin >> n;

    vector<int> v, v1;
    v.push_back(1);
    v.push_back(1);

    ll sum;
    for (int i = 2; i <= 1000000; i++)
    {
        sum = v[i - 1] + v[i - 2];
        if (sum > 1000000)
            break;
        v.push_back(sum);
    }

    int freq[1000003] = {0};
    for (int i = 0; i < v.size(); i++)
    {
        freq[v[i]]++;
    }

    for (int i = 1; i <= 1000000; i++)
    {
        if (freq[i] == 0)
            v1.push_back(i);
    }

    // Check if n is within the bounds of the result vector
    if (n > v1.size())
    {
        cout << "Invalid value of n.\n";
    }
    else
    {
        cout << v1[n - 1];
    }

    return 0;
}
