#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
int main()
{
    nabidtheboss();
    int t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        if( (a&(a-1) ) == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
  }
    return 0;
}