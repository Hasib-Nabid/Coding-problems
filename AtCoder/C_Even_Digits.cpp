#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
bool sum(long long digit)
{
    long long s=0;
    while (digit)
    {
        s = digit % 10;
        if(s%2==1){
            return false;
            break;
        }
        digit /= 10;
    }
    return true;
}
int main()
{
    optimize();
            long long n, i = 0, c = 0;
    cin >> n;
    while (1)
    {
        if (i % 2 == 0 && sum(i))
        {
            c++;
        }
        if (n == c)
        {
            cout << i << endl;
            break;
        }
        else i++;
    }
    return 0;
}