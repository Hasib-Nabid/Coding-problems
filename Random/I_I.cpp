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
    vector<int>v(10);
    vector<int>x;
    for(int i=0;i<10;i++) cin>>v[i];
    for(int i=0;i<10;i++) {
        int a= v[i]%42;
        x.push_back(a);
    }
    sort(x.begin(),x.end());
    int sz= unique(x.begin(),x.end())-x.begin();
   cout<<sz<<endl;
    return 0;
}