#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
string a, b, c, s;
    cin >> a >> b >> c;

    s = a + b;

    sort(s.begin(), s.end());
    sort(c.begin(), c.end());

    if(s == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}