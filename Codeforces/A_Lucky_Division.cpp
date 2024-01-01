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
    int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%44==0 || n%74==0 || n%74==0 || n%444==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}