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
   int cnt1=0,cnt2=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>b) cnt1++;
        else if(a<b) cnt2++;
    }
    if(cnt1>cnt2) cout<<"Mishka"<<endl;
    else if (cnt1<cnt2) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
    return 0;
}