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
            int n;
            cin>>n;
            if(n<365) cout<<n<<endl;
            else if(n==365) cout<<"0"<<endl;
            else{
                n=n%365;
                cout<<n<<endl;
            }
        }
    return 0;
}