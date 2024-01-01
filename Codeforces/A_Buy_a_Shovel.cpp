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
    int k,r,ans,i=1;
    cin>>k>>r;

    while(1){
        ans=k*i;
        if(ans%10==r || ans%10==0){
         cout<<i<<endl;
        break;
        }
        else i++;
    }
    return 0;
}