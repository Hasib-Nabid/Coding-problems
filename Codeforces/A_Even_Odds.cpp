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
    ll a,b,half,ans;
    cin>>a>>b;
    if(a%2==0) half=a/2;
    else half=(a/2)+1;
    
    if(b<=half) cout<<2*b-1<<endl;
    else cout<<(b-half)*2<<endl;
    return 0;
}