#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(14); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
   int x,n;
   ll sum=0;
   cin>>x>>n;
   int a[n];
   for(int i=0;i<n;i++) {
    cin>>a[i];
    sum+=a[i];
   }
   ll ans= ((x*n)-sum)+x;
   cout<<ans<<endl;
    return 0;
}