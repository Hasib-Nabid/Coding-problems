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
           long long n;
            cin>>n;
           long long sum= ((n*(n+1)*(2*n+1)))/6;
           cout<<sum<<endl;
        }
    return 0;
}