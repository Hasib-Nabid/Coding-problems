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
        int total=0,max=0;
        while(t--){
            int a,b;
            cin>>a>>b;
            total=total+(b-a);
            if(total>=max) max=total;
        }

        cout<<max;
    return 0;
}