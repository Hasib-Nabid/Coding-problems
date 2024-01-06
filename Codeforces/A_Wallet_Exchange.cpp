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
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll sum=0;
        sum=a+b;
        if(sum%2==0) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}