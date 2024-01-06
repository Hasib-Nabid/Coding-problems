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
       int n,a=0,b=0;
       string s;
       cin>>n>>s;
       for(auto u:s){
        if(u=='+') a++;
        else b++;
       }
       int ans=abs(a-b);
       cout<<ans<<endl;
    }
    return 0;
}