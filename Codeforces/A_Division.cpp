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
        if(a<1400) cout<<"Division 4"<<endl;
       else if(a<1600) cout<<"Division 3"<<endl;
       else if(a<1900) cout<<"Division 2"<<endl;
        else cout<<"Division 1"<<endl;
    }
    return 0;
}