#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


long long sum(long long digit)
{
    long long s = 0;
    while (digit)
    {
        s += digit % 10;
        digit /= 10;
    }
    return s;
}
int main()
{
    optimize();
    long long n, i = 1, c = 0;
    cin >> n;
    long long temp=n;
    while (temp--)
    {
        if (i % sum(i) == 0)
        {
            c++;
        }
        i++;
    }
    cout<<c<<endl;
    return 0;
}