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
        int a,b;
        cin>>a,b;
      int  d=__gcd(a,b);
        int lcm=(a*b)/d;
        cout<<lcm<<endl;
    return 0;
}