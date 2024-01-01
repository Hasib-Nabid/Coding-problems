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
    string s;
    cin>>s;
    bool flag=false;
    for(auto i:s){
        if(i=='H' || i=='Q' || i=='9'){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    if(!flag) cout<<"NO"<<endl;
    return 0;
}