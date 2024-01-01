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
    string s="nabid";
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            cout<<s.substr(i,j)<<endl;
        }
    }
    return 0;
}