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
    ll t;
    cin>>t;
    while(t--){
        ll a,b,cnt=0;
        cin>>a>>b;
   if(a%b==0) cout<<"0"<<endl;
   else cout<<(b-(a%b))<<endl;
    }
    return 0;
}