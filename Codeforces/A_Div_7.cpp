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
        int a;
        cin>>a;
     int ans=a%7;
        if(a%7==0) cout<<a<<endl;
        else {
            while(1){
                 if(a%7==0) {
                    cout<<ans<<endl;
                    break;
                 }
         if(ans>=4) a++;
         else a--;
            }
        }
    }
    return 0;
}