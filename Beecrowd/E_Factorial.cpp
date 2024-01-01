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
        ll n;
        cin>>n;
        ll fact=1;
        for(ll i=1;i<=n;i++){
            fact*=i;
        }
        cout<<fact<<endl;
    return 0;
}